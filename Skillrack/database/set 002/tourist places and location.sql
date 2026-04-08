SELECT 
    t.id, 
    t.name, 
    l.name
FROM 
    touristplace t
JOIN 
    location l ON t.locationid = l.id
ORDER BY 
    t.id DESC;
