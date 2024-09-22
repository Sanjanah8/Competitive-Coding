select sell_date, count(distinct product) num_sold
    , string_agg(product, ',') within group( order by product) products
from (select distinct * from Activities) t
group by sell_date
order by sell_date
