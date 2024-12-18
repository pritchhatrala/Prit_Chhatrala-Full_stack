Lab 2: Use a LEFT JOIN to show all departments, even those without employees.


```
SELECT 
    departments.department_name,
    employees.employee_name
FROM 
    departments
LEFT JOIN 
    employees
ON 
    departments.department_id = employees.department_id;
```