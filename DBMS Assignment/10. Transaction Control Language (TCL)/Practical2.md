Lab 2: Insert additional rows, then use ROLLBACK to undo the last insert operation.

```
START TRANSACTION;

INSERT INTO courses (course_id, course_name, course_credits, course_duration)
VALUES 
(4, 'Biology', 3, '5 months'),
(5, 'Computer Science', 4, '6 months');

ROLLBACK;

SELECT * FROM courses;

```