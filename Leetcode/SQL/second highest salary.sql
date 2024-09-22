select ifNull(max(salary),null) as SecondHighestSalary 
from Employee where salary != (select max(salary) 
from Employee);
