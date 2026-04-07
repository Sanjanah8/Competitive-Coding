SELECT 
    os1.id, 
    os1.versionname, 
    os1.versionnumber, 
    os2.versionname
FROM 
    operatingsystem os1 
LEFT JOIN 
    operatingsystem os2 ON os1.previousversionid = os2.id 
ORDER BY 
    os1.id DESC;
