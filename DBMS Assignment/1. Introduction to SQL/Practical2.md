Lab 2: Insert five records into the students table and retrieve all records using the SELECT statement.

```
INSERT INTO students (student_id,student_name, age, class, address) 
VALUES 
(1,'Prit', 21, 'Python', 'Kehsod'),
(2,'Ashish', 21, 'Graphic & UI/UX', 'Jamnagar'),
(3,'Utsav', 21, 'Froentend dev.', 'Dwarka'),
(4,'Yash', 21, 'BCA', 'Keshod'),
(5,'Sejan', 21, 'Mec.', 'Keshod');

```

```
SELECT * FROM students;
```