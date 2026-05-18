# Write your MySQL query statement below
SELECT emp1.name as Employee FROM 
      Employee as emp1 JOIN Employee as emp2 ON emp1.managerId=emp2.id 
      WHERE emp1.salary > emp2.salary