SELECT 
    s.id AS student_id, 
    s.name AS student_name, 
    t.name AS test_name, 
    (ts.numerical + ts.logical + ts.verbal) AS test_score,
    ts.numerical, 
    ts.logical, 
    ts.verbal
FROM 
    student s
JOIN 
    test t ON s.id = t.studentid
JOIN 
    topicwisescore ts ON t.id = ts.testid
ORDER BY 
    test_score DESC, 
    ts.numerical DESC, 
    ts.logical DESC, 
    t.id DESC;
