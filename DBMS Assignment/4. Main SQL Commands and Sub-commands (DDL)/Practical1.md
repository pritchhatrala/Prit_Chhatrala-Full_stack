Lab 1: Create a table courses with columns: course_id, course_name, and course_credits. Set the course_id as the primary key.

``` 

CREATE TABLE courses (
    course_id INT PRIMARY KEY,            
    course_name VARCHAR(100) NOT NULL,    
    course_credits INT NOT NULL            
);
```