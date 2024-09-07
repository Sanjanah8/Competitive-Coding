select product.product_name,sales.year,sales.price
from product right join sales
on product.product_id=sales.product_id;
