select m.name
from employee as e
join employee as m
on e.managerId=m.id
group by e.managerid
having count(e.id)>=5
