Lab 1: Create two tables: departments and employees. Perform an INNER JOIN to
display employees along with their respective departments

```

-- Step 1: Create the departments table
CREATE TABLE departments (
    department_id INT PRIMARY KEY,
    department_name VARCHAR(50) NOT NULL
);

-- Step 2: Create the employees table
CREATE TABLE employees (
    employee_id INT PRIMARY KEY,
    employee_name VARCHAR(50) NOT NULL,
    department_id INT,
    FOREIGN KEY (department_id) REFERENCES departments(department_id)
);

-- Step 3: Insert data into the departments table
INSERT INTO departments (department_id, department_name)
VALUES 
(1, 'Human Resources'),
(2, 'Finance'),
(3, 'Engineering');

-- Step 4: Insert data into the employees table
INSERT INTO employees (employee_id, employee_name, department_id)
VALUES 
(101, 'Alice', 1),
(102, 'Bob', 2),
(103, 'Charlie', 3),
(104, 'Diana', 1);

-- Step 5: Perform an INNER JOIN to display employees along with their departments
SELECT 
    employees.employee_name,
    departments.department_name
FROM 
    employees
INNER JOIN 
    departments
ON 
    employees.department_id = departments.department_id;
    
```