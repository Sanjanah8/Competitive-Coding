SELECT 
    teamname, 
    COUNT(*) AS player_count
FROM 
    player
GROUP BY 
    teamname
HAVING 
    COUNT(*) >= 3
ORDER BY 
    player_count DESC, 
    teamname ASC;
