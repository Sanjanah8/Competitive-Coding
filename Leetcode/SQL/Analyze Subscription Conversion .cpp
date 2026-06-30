SELECT 
    t.user_id,
    ROUND(AVG(t.activity_duration), 2) AS trial_avg_duration,
    ROUND(AVG(p.activity_duration), 2) AS paid_avg_duration
FROM 
    UserActivity t
INNER JOIN 
    UserActivity p ON t.user_id = p.user_id
WHERE 
    t.activity_type = 'free_trial' 
    AND p.activity_type = 'paid'
GROUP BY 
    t.user_id
ORDER BY 
    t.user_id ASC;
