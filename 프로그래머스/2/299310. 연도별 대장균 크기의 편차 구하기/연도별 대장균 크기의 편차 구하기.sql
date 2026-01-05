SELECT
  y AS year,
  MAX(size_of_colony) OVER (PARTITION BY y) - size_of_colony AS year_dev,
  id
FROM (
  SELECT
    id,
    size_of_colony,
    YEAR(differentiation_date) AS y
  FROM ecoli_data
) t
ORDER BY y, year_dev