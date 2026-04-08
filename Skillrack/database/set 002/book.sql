SELECT 
    publishedyear, 
    authorname, 
    COUNT(id) AS book_count
FROM 
    book
GROUP BY 
    publishedyear, 
    authorname
ORDER BY 
    publishedyear DESC, 
    book_count DESC, 
    authorname ASC;
