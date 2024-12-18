# DBMS ASSESMENT


Step 1: Create the Bank, Account Holder, and Loan Tables

```
-- Create the Bank table
CREATE TABLE Bank (
    branch_id INT PRIMARY KEY,
    branch_name VARCHAR(50),
    branch_city VARCHAR(50)
);

-- Create the Account Holder table
CREATE TABLE Account_Holder (
    account_holder_id INT PRIMARY KEY,
    account_no VARCHAR(20) UNIQUE,
    account_holder_name VARCHAR(50),
    city VARCHAR(50),
    contact VARCHAR(15),
    date_of_account_created DATE,
    account_status VARCHAR(20),
    account_type VARCHAR(20),
    balance DECIMAL(10, 2)
);

-- Create the Loan table
CREATE TABLE Loan (
    loan_no INT PRIMARY KEY,
    branch_id INT,
    account_holder_id INT,
    loan_amount DECIMAL(10, 2),
    loan_type VARCHAR(50),
    FOREIGN KEY (branch_id) REFERENCES Bank(branch_id),
    FOREIGN KEY (account_holder_id) REFERENCES Account_Holder(account_holder_id)
);
```

Step 2: Intra Bank Transfer Transaction (Transfer $100 from Account A to Account B)
```
-- Begin Transaction
START TRANSACTION;

-- Deduct $100 from Account A (debited account)
UPDATE Account_Holder
SET balance = balance - 100
WHERE account_no = 'A123';  -- Account A

-- Add $100 to Account B (credited account)
UPDATE Account_Holder
SET balance = balance + 100
WHERE account_no = 'B456';  -- Account B

-- Commit the transaction to make the changes permanent
COMMIT;
```

Step 3: Fetch Details of Account Holders from the Same City
```
-- Fetch details of account holders from the same city
SELECT account_holder_id, account_holder_name, city
FROM Account_Holder
WHERE city = 'New York';  -- Replace 'New York' with the desired city
```

Step 4: Fetch Account Number and Account Holder Name for Accounts Created After 15th of Any Month.
```
-- Fetch account number and account holder name for accounts created after 15th of any month
SELECT account_no, account_holder_name
FROM Account_Holder
WHERE DAY(date_of_account_created) > 15;
```

Step 5: Count the Number of Branches in Each City (Alias Count_Branch)
```
-- Count the number of branches in each city
SELECT branch_city, COUNT(branch_id) AS Count_Branch
FROM Bank
GROUP BY branch_city;
```

Step 6: Fetch Account Holder's ID, Name, Branch ID, and Loan Amount for People Who Have Taken Loans (Using JOIN)

```
-- Fetch account holder's id, name, branch id, and loan amount for people who have taken loans
SELECT AH.account_holder_id, AH.account_holder_name, L.branch_id, L.loan_amount
FROM Account_Holder AH
JOIN Loan L ON AH.account_holder_id = L.account_holder_id;
```