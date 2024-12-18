Lab 2: Modify the view to exclude employees whose salaries are below $50,000.

```
CREATE OR REPLACE VIEW EmployeeDepartment AS
SELECT employees.employee_id, employees.employee_name, departments.department_name
FROM employees
JOIN departments ON employees.department_id = departments.department_id
WHERE employees.salary >= 50000;
```