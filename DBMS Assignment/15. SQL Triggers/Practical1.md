Lab 1: Create a trigger to automatically log changes to the employees table when a new
employee is added

```
CREATE TABLE employee_log (
    log_id INT AUTO_INCREMENT PRIMARY KEY,
    employee_id INT,
    employee_name VARCHAR(100),
    department VARCHAR(100),
    date_added TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);
```

```
CREATE TRIGGER log_employee_insert
AFTER INSERT ON employees
FOR EACH ROW
BEGIN
    INSERT INTO employee_log (employee_id, employee_name, department)
    VALUES (NEW.employee_id, NEW.employee_name, NEW.department);
END;
```