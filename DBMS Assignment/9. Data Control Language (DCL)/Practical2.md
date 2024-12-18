Lab 2: Revoke the INSERT permission from user1 and give it to user2

```
-- Step 1: Revoke INSERT permission from user1
REVOKE INSERT 
ON school_db.courses 
FROM 'user1'@'localhost';

-- Step 2: Grant INSERT permission to user2
GRANT INSERT 
ON school_db.courses 
TO 'user2'@'localhost';

```