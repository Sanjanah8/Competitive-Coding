1)

SELECT transaction_date,
       SUM(amount * (1 - is_even_transaction)) AS odd_sum,
       SUM(amount * is_even_transaction) AS even_sum
FROM (
    SELECT *,
           (amount % 2 = 0) AS is_even_transaction
    FROM transactions
) AS flagged_transactions
GROUP BY transaction_date
ORDER BY transaction_date

2)  

select transaction_date,
sum(case when amount%2 <> 0 then amount else 0 end) as odd_sum,
sum(case when amount%2 = 0 then amount else 0 end) as even_sum
from transactions
group by transaction_date
order by transaction_date 
