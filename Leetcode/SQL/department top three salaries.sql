SELECT D1.name AS Department, 
    E1.name AS Employee,
    E1.salary AS Salary 
FROM Employee E1
LEFT JOIN Department D1
    ON E1.departmentId = D1.id

WHERE (E1.departmentId, E1.salary) IN ( SELECT * FROM (
    SELECT E2.departmentId, E2.salary
    FROM Employee E2
    WHERE E1.departmentId = E2.departmentId
    GROUP BY E2.salary
    ORDER BY E2.salary DESC
    LIMIT 3 ) TEMP);
