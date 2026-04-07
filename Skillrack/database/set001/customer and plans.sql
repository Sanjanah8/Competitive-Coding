SELECT c.id, c.name, c.age, p.name, p.price FROM customer c JOIN plan p ON c.planid = p.id WHERE c.age >= 18 ORDER BY c.id DESC;
