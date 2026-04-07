SELECT 
    s.id, 
    s.name, 
    s.age, 
    c.name
FROM 
    student s 
JOIN 
    course c ON s.courseid = c.id
WHERE 
    s.age < 18
ORDER BY 
    s.id DESC;
