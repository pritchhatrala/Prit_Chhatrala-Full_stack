Lab 1: Write a PL/SQL block using an IF-THEN condition to check the department of an
employee

```
DECLARE
   emp_department VARCHAR2(50);  -- Variable to hold the employee's department
   emp_id NUMBER := 101;  -- Employee ID to check, you can modify this as needed
BEGIN
   -- Fetch the department of the employee with emp_id = 101
   SELECT department INTO emp_department
   FROM employees
   WHERE employee_id = emp_id;

   -- Check the department using IF-THEN condition
   IF emp_department = 'Sales' THEN
      DBMS_OUTPUT.PUT_LINE('The employee is in the Sales department.');
   ELSIF emp_department = 'HR' THEN
      DBMS_OUTPUT.PUT_LINE('The employee is in the HR department.');
   ELSE
      DBMS_OUTPUT.PUT_LINE('The employee is in another department.');
   END IF;
END;
/
```