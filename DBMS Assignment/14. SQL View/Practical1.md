Lab 1: Create a view to show all employees along with their department names.

```
CREATE VIEW EmployeeDepartment AS
SELECT employees.employee_id, employees.employee_name, departments.department_name
FROM employees
JOIN departments ON employees.department_id = departments.department_id;
```