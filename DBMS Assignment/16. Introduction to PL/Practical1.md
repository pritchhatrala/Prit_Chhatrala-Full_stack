Lab 1: Write a PL/SQL block to print the total number of employees from the employees table.

```
DECLARE
  total_employees NUMBER;  -- Variable to store the total number of employees
BEGIN
  -- Retrieve the count of employees from the employees table and store it in the variable
  SELECT COUNT(*) INTO total_employees FROM employees;

  -- Output the total number of employees using DBMS_OUTPUT
  DBMS_OUTPUT.PUT_LINE('Total number of employees: ' || total_employees);
END;
/
```