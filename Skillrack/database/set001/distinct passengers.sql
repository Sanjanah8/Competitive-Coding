SELECT name, age FROM buspassenger
UNION
SELECT name, age FROM trainpassenger
UNION
SELECT name, age FROM aeroplanepassenger
ORDER BY age DESC, name ASC;
