SELECT 
    material, 
    size, 
    COUNT(*)
FROM 
    mattress
WHERE 
    price >= 10000 AND price <= 15000
GROUP BY 
    material, 
    size
ORDER BY 
    material, 
    size;
