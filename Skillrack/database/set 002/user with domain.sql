SET BUILTIN_ALIAS_OVERRIDE=TRUE;

SELECT 
    u.id, 
    u.name, 
    d.id, 
    d.name
FROM 
    "user" u
LEFT JOIN 
    domain d ON u.domainid = d.id
ORDER BY 
    u.id DESC;


 set non_keywords user;
 select u.id,u.name,d.id,d.name from "USER" u left join domain d on u.domainid=d.id order by u.id desc;
