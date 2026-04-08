SELECT 
    c.id, 
    c.name, 
    SUM(b.balance) AS total_balance
FROM 
    customer c
JOIN 
    bankaccount b ON c.id = b.customerid
GROUP BY 
    c.id, 
    c.name
ORDER BY 
    total_balance DESC, 
    c.id DESC;
