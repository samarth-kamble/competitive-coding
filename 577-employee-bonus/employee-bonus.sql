# Write your MySQL query statement below

SELECT Employee.name, Bonus.bonus 
FROM Employee
LEFT JOIN Bonus
ON Employee.empID = Bonus.empID
WHERE bonus < 1000 OR Bonus IS NULL ;

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna