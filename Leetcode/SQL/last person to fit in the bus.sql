SELECT person_name
FROM(
SELECT person_name, SUM(weight) OVER(ORDER BY turn) as weight
FROM queue) temp
where weight <= 1000
order by weight desc
LIMIT 1
