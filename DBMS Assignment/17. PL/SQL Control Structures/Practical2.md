Lab 2: Use a FOR LOOP to iterate through employee records and display their names.
```
DECLARE
   CURSOR emp_cursor IS
      SELECT employee_name FROM employees;  -- Select the employee names from the employees table
BEGIN
   FOR emp_record IN emp_cursor LOOP
      -- Display each employee's name
      DBMS_OUTPUT.PUT_LINE('Employee Name: ' || emp_record.employee_name);
   END LOOP;
END;
/
```