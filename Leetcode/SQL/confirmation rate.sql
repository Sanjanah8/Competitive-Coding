WITH cte AS (
    SELECT user_id, ROUND(SUM(IF(action='confirmed', 1, 0)) / COUNT(action), 2) as confirmation_rate
    FROM Confirmations
    GROUP BY user_id
)
SELECT DISTINCT s.user_id, IFNULL(cte.confirmation_rate ,0) as confirmation_rate
FROM Signups as s
LEFT JOIN cte on cte.user_id = s.user_id
