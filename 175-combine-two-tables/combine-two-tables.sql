# Write your MySQL query statement below
SELECT  person.firstName, person.lastName, Address.city, Address.state
FROM Person
LEFT JOIN Address ON person.personId= Address.personId;