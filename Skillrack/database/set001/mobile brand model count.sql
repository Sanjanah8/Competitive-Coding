SELECT 
    m.brandname, 
    m.modelname, 
    COUNT(c.mobileid) AS mobiles_sold_count
FROM 
    mobile m
JOIN 
    customer c ON m.id = c.mobileid
WHERE 
    c.country = 'India'
GROUP BY 
    m.brandname, 
    m.modelname
ORDER BY 
    mobiles_sold_count DESC, 
    m.brandname ASC, 
    m.modelname ASC;
