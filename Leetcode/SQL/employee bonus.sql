SELECT Employee.name,Bonus.bonus
FROM Employee  left outer join Bonus 
ON Employee.empid=Bonus.empid
where bonus<1000 or bonus is null;
