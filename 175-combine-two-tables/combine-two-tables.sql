# Write your MySQL query statement below

SELECT 
    Person.firstName,
    Person.lastName,
    Address.city,
    Address.state
FROM Person
LEFT JOIN Address
ON Person.personId = Address.personId;



-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna