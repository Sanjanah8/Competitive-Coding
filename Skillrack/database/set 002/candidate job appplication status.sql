SELECT 
    c.id, 
    c.name, 
    j.id, 
    j.title, 
    j.companyname, 
    ja.status
FROM 
    candidate c
JOIN 
    jobapplicant ja ON c.id = ja.candidateid
JOIN 
    job j ON ja.jobid = j.id
ORDER BY 
    c.id DESC, 
    j.id DESC;
