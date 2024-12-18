Lab 1: Create two new users user1 and user2 and grant user1 permission to SELECT from the courses table.

```
-- Step 1: Create user1 and user2
CREATE USER 'user1'@'localhost' IDENTIFIED BY 'password1';
CREATE USER 'user2'@'localhost' IDENTIFIED BY 'password2';

-- Step 2: Grant SELECT permission on the courses table to user1
GRANT SELECT 
ON school_db.courses 
TO 'user1'@'localhost';

-- Step 3: Verify the granted privileges for user1
SHOW GRANTS FOR 'user1'@'localhost';
```