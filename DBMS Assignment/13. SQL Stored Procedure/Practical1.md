Lab 1: Write a stored procedure to retrieve all employees from the employees table based
on department.
```
DELIMITER $$

CREATE PROCEDURE GetEmployeesByDepartment (IN dept_id INT)
BEGIN
    SELECT employee_id, employee_name, salary
    FROM employees
    WHERE department_id = dept_id;
END$$

DELIMITER ;
```