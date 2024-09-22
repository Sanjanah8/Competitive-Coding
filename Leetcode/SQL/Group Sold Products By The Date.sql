SELECT  sell_date, count( distinct product) num_sold, 
        GROUP_CONCAT(distinct product ORDER BY product SEPARATOR ',') products
FROM activities
GROUP BY 1
ORDER BY 1;

select sell_date, count(distinct product) num_sold,string_agg(product, ',') within group( order by product) products
from (select distinct * from Activities) t
group by sell_date
order by sell_date
