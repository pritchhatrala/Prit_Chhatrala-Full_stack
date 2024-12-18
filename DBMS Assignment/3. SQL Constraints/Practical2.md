Lab 2: Implement a FOREIGN KEY constraint to relate the teacher_id from the teachers table with the students table

```
ALTER TABLE students
ADD CONSTRAINT foreign_key_teacher_id
FOREIGN KEY (teacher_id) REFERENCES teachers(teacher_id);
```