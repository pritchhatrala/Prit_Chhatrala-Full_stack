Lab 1: Create a table teachers with the following columns: teacher_id (Primary Key),
teacher_name (NOT NULL), subject (NOT NULL), and email (UNIQUE).


```
CREATE TABLE teachers (
    teacher_id INT PRIMARY KEY,          
    teacher_name VARCHAR(100) NOT NULL, 
    subject VARCHAR(100) NOT NULL,      
    email VARCHAR(100) UNIQUE           
);
```