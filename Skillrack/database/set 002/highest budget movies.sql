SELECT 
    id, 
    name, 
    releaseyear, 
    budget
FROM 
    movie
WHERE 
    (releaseyear, budget) IN (
        SELECT releaseyear, MAX(budget)
        FROM movie
        GROUP BY releaseyear
    )
ORDER BY 
    budget DESC, 
    releaseyear DESC, 
    id DESC;
