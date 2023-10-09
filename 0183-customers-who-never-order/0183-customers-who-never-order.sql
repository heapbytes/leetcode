# Write your MySQL query statement below

select c1.name as Customers
from Customers c1
left join Orders o1 on o1.customerId = c1.id
where o1.id is NULL or o1.customerID is NULL;
