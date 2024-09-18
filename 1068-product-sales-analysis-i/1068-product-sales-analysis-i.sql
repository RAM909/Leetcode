# Write your MySQL query statement below
select y.product_name,x.year as year,x.price 
from sales x inner join product y on x.product_id = y.product_id