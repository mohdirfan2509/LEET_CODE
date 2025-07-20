-- SELECT
--  email
-- FROM 
--  Person
-- WHERE 
--  COUNT(email)>=2;


SELECT DISTINCT
  p1.email 
FROM 
 Person p1, Person p2
WHERE
  p1.email = p2.email 
AND
   p1.id != p2.id ;  
