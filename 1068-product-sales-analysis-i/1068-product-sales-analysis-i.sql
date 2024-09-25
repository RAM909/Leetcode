# Write your MySQL query statement below
select y.product_name as "product_name",x.year as year,x.price as "price" 
from sales x inner join product y on x.product_id = y.product_id