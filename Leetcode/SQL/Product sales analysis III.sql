SELECT product_id , 
       year AS first_year, 
       quantity,
       price
       FROM(
SELECT * , 
    DENSE_RANK() OVER (partition by product_id ORDER BY year ASC ) as r
    FROM Sales) as year_rank
    WHERE r= 1;
