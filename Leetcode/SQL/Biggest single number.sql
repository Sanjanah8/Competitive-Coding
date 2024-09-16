SELECT max(num) as num
FROM MyNumbers
WHERE num in (SELECT num
              FROM MyNumbers
              GROUP BY num
              HAVING Count(num) = 1);           
