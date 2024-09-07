SELECT visits.customer_id, COUNT(visits.visit_id) AS count_no_trans 
from visits LEFT JOIN Transactions 
ON visits.visit_id = transactions.visit_id  
WHERE transactions.amount IS NULL 
GROUP BY visits.customer_id; 
