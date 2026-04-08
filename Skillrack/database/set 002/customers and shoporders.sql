SELECT 
    c.id, 
    c.name, 
    SUM(i.quantity) AS total_quantity, 
    SUM(i.price) AS total_price
FROM 
    customer c
JOIN 
    icecreamorder i ON c.id = i.customerid
GROUP BY 
    c.id, c.name
HAVING 
    SUM(i.quantity) > 5
ORDER BY 
    total_quantity DESC, 
    total_price DESC, 
    c.id DESC;
