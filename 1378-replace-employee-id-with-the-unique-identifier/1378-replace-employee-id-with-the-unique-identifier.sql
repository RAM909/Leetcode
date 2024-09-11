# Write your MySQL query statement below
select x.unique_id , y.name as "name"
from employees y left join employeeUNI x on x.id = y.id