SELECT 
    producttype, 
    COUNT(*)
FROM 
    product
WHERE 
    price >= 50
GROUP BY 
    producttype
ORDER BY 
    producttype;
