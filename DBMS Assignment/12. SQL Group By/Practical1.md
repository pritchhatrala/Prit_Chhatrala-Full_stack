Lab 1: Group employees by department and count the number of employees in each
department using GROUP BY.

```
SELECT department_id, COUNT(employee_id) AS employee_count
FROM employees
GROUP BY department_id;

```