# Write your MySQL query statement below
SELECT
    Employee.name as "name", Bonus.bonus
FROM
    Employee
        LEFT OUTER JOIN
    Bonus ON Employee.empid = Bonus.empid
    where bonus < 1000 OR bonus is NULL