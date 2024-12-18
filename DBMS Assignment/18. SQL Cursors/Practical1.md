Lab 1: Write a PL/SQL block using an explicit cursor to retrieve and display employee details
```
DECLARE
   -- Declare an explicit cursor to fetch employee details
   CURSOR emp_cursor IS
      SELECT employee_id, employee_name, department, salary
      FROM employees;
   
   -- Variables to store fetched employee details
   v_employee_id employees.employee_id%TYPE;
   v_employee_name employees.employee_name%TYPE;
   v_department employees.department%TYPE;
   v_salary employees.salary%TYPE;
BEGIN
   -- Open the cursor
   OPEN emp_cursor;
   
   -- Loop through all rows returned by the cursor
   LOOP
      -- Fetch each row into the respective variables
      FETCH emp_cursor INTO v_employee_id, v_employee_name, v_department, v_salary;
      
      -- Exit the loop if no more rows are available
      EXIT WHEN emp_cursor%NOTFOUND;
      
      -- Display the fetched employee details
      DBMS_OUTPUT.PUT_LINE('Employee ID: ' || v_employee_id || ', Name: ' || v_employee_name ||
                           ', Department: ' || v_department || ', Salary: ' || v_salary);
   END LOOP;
   
   -- Close the cursor after processing all rows
   CLOSE emp_cursor;
END;
/
```