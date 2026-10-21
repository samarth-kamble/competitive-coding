# Write your MySQL query statement below
DELETE FROM Person
WHERE id NOT IN (
    SELECT min_id FROM (
        SELECT MIN(id) AS min_id 
        FROM Person
        GROUP BY email
    ) AS temp_table
)

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna