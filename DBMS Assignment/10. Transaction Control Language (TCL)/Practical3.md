Lab 3: Create a SAVEPOINT before updating the courses table, and use it to roll back
specific changes.

```
START TRANSACTION;

SAVEPOINT before_update;

UPDATE courses 
SET course_duration = '8 months' 
WHERE course_id = 1;

ROLLBACK TO SAVEPOINT before_update;

SELECT * FROM courses;

```