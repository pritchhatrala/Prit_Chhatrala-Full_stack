Lab 2: Commit part of a transaction after using a savepoint and then rollback the remaining
changes

```
-- Step 1: Start a transaction
BEGIN;

-- Step 2: Insert some records into the table (for example, 'employees' table)
INSERT INTO employees (employee_id, employee_name, salary, department)
VALUES (1, 'prit', 50000, 'IT');

INSERT INTO employees (employee_id, employee_name, salary, department)
VALUES (2, 'utsav', 60000, 'HR');

-- Step 3: Create a savepoint after the first two inserts
SAVEPOINT savepoint1;

-- Step 4: Insert more records (these will be rolled back later)
INSERT INTO employees (employee_id, employee_name, salary, department)
VALUES (3, 'parth', 55000, 'Finance');

INSERT INTO employees (employee_id, employee_name, salary, department)
VALUES (4, 'sejan', 70000, 'Marketing');

-- Step 5: Commit the changes made up to the savepoint (the first two inserts)
COMMIT;

-- Step 6: Rollback the changes after the savepoint (the last two inserts)
ROLLBACK TO SAVEPOINT savepoint1;

-- Step 7: (Optional) Commit the remaining changes (if any)
COMMIT;
```