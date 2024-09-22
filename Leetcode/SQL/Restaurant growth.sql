SELECT visited_on, amount, ROUND(amount/7, 2) AS average_amount
FROM
(
    SELECT
        DISTINCT visited_on,
        SUM(amount) OVER(ORDER BY visited_on RANGE BETWEEN INTERVAL 6 DAY PRECEDING AND CURRENT ROW) AS amount,
        MIN(visited_on) OVER() AS start_date
        FROM customer
) AS table1
WHERE visited_on >= start_date + 6;
