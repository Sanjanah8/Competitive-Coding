select person.firstName,person.lastName,address.city,address.state
from person left join address
on person.personid=address.personid;
