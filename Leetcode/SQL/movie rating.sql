(SELECT u.name results
FROM users u INNER JOIN movieRating m ON (u.user_id = m.user_id)
GROUP BY 1
ORDER BY count(*) DESC, u.name ASC LIMIT 1)

UNION ALL

(SELECT m.title results
FROM movies m INNER JOIN movieRating mr ON (m.movie_id = mr.movie_id)
WHERE mr.created_at like '2020-02%'
GROUP BY 1
ORDER BY avg(mr.rating) DESC, m.title ASC LIMIT 1);
