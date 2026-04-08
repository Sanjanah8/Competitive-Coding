SELECT 
    d.id, 
    d.name, 
    u.id, 
    u.name
FROM 
    domain d
LEFT JOIN 
    users u ON d.id = u.domainid
ORDER BY 
    d.id DESC, 
    u.id DESC;
