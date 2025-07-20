-- SELECT name 
-- FROM Employee emp1, Employee emp2
-- WHERE  


SELECT
  emp1.name AS Employee  
FROM 
 Employee emp1, Employee emp2 
WHERE
   emp1.managerId=emp2.id
AND    
   emp1.salary>emp2.salary      