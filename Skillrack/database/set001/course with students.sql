SELECT 
    c.id, 
    c.name, 
    s.name, 
    s.age
FROM 
    course c 
LEFT JOIN 
    student s ON c.id = s.courseid
ORDER BY 
    c.id DESC;
