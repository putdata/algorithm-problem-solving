SELECT
  CONCAT(CEIL(MONTH(differentiation_date) / 3), 'Q') AS quarter,
  COUNT(*) AS ecoli_count
FROM ecoli_data
GROUP BY quarter
ORDER BY quarter;