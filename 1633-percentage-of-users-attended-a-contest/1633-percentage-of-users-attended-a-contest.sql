# Write your MySQL query statement below
select contest_id as "contest_id",Round(count(user_id)*100/(select count(user_id) as "percentage"  from users),2) as "percentage"
from Register
group by contest_id
order by percentage desc,contest_id asc