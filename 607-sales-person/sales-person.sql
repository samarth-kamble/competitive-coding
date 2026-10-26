# Write your MySQL query statement below
SELECT name 
FROM SalesPerson s
WHERE s.sales_id
NOT IN (
    SELECT sales_id
    FROM Company c
    INNER JOIN Orders o
    ON o.com_id = c.com_id
    WHERE c.name = "RED"
)

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna