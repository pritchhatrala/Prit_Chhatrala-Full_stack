Lab 2: Create a cursor to retrieve all courses and display them one by one.
```
DECLARE
   -- Declare an explicit cursor to fetch course details
   CURSOR course_cursor IS
      SELECT course_id, course_name, course_credits
      FROM courses;
   
   -- Variables to store fetched course details
   v_course_id courses.course_id%TYPE;
   v_course_name courses.course_name%TYPE;
   v_course_credits courses.course_credits%TYPE;
BEGIN
   -- Open the cursor
   OPEN course_cursor;
   
   -- Loop through all rows returned by the cursor
   LOOP
      -- Fetch each row into the respective variables
      FETCH course_cursor INTO v_course_id, v_course_name, v_course_credits;
      
      -- Exit the loop if no more rows are available
      EXIT WHEN course_cursor%NOTFOUND;
      
      -- Display the fetched course details
      DBMS_OUTPUT.PUT_LINE('Course ID: ' || v_course_id || ', Name: ' || v_course_name ||
                           ', Credits: ' || v_course_credits);
   END LOOP;
   
   -- Close the cursor after processing all rows
   CLOSE course_cursor;
END;
/
```