SELECT 
    u.id, 
    u.name, 
    d.id, 
    d.name
FROM 
    user u
JOIN 
    domain d ON u.domainid = d.id
ORDER BY 
    u.id DESC;
