SELECT P1.product_id, P1.new_price price
from Products P1
INNER JOIN 
(SELECT product_id, max(change_date) change_date
FROM PRODUCTS 
WHERE change_date <= '2019-08-16'
GROUP BY 1) P2
ON ((P2.product_id, P2.change_date) = (P1.product_id, P1.change_date))

UNION

SELECT DISTINCT product_id, 10 price
FROM PRODUCTS 
WHERE product_id not in 
    (SELECT DISTINCT product_id from Products where change_date <= '2019-08-16') 
;
