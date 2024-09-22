SELECT CASE
    WHEN id%2 = 1 AND id = (SELECT MAX(id) FROM seat) THEN id
    WHEN id%2 = 1 THEN id+1
    WHEN id%2 = 0 THEN id-1 
    END id, student
FROM seat 
ORDER BY id;
