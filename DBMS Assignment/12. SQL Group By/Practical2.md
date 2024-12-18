Lab 2: Use the AVG aggregate function to find the average salary of employees in each
department.

```
SELECT department_id, AVG(salary) AS average_salary
FROM employees
GROUP BY department_id;

```