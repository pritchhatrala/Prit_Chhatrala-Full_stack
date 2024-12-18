Lab 1: Insert a few rows into the courses table and use COMMIT to save the changes.

```
START TRANSACTION;

INSERT INTO courses (course_id, course_name, courses_credits, course_duration)
VALUES 
(10, 'C++', 6, '6 months'),
(11, 'JAVA', 4, '4 months'),
(12, 'DBMS', 5, '5 months');

COMMIT;

SELECT * FROM courses;
```