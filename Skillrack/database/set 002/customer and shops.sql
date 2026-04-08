SELECT 
    c.id, 
    c.name, 
    c.city, 
    s.name, 
    s.city
FROM 
    customer c
JOIN 
    customershopmap m ON c.id = m.customerid
JOIN 
    shop s ON m.shopid = s.id
ORDER BY 
    c.id DESC, 
    s.id DESC;
