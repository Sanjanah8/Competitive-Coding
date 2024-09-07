SELECT name as Customers
from customers c
LEFT JOIN Orders o
on C.id= o.customerid
where o.id is null
