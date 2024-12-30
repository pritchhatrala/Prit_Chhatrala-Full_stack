1. Insert Dummy Data into the Bank Table

```
INSERT INTO Bank (branch_id, branch_name, branch_city) VALUES
(1, 'Bank Of Baroda', 'keshod'),
(2, 'Stat Bank of india', 'Rajkot'),
(3, 'HDFC Bank', 'Dwarka'),
(4, 'ICICI Bank', 'Jamnagar');
```


2. Insert Dummy Data into the Account_Holder Table
```
INSERT INTO Account_Holder (account_holder_id, account_no, account_holder_name, city, contact, date_of_account_created, account_status, account_type, balance) VALUES
(101, 'A123', 'Prit', 'Keshod', '1234567890', '14-10-2004', 'Active', 'Savings', 5000.00),
(102, 'B123', 'Ashish', 'Jamnagar', '9876543210', '15-10-2005', 'Active', 'Current', 7000.00),
(103, 'C123', 'Utsav', 'Dwarka', '5678901234', '16-10-2004', 'Terminated', 'Savings', 0.00),
(104, 'D123', 'Parth', 'Morbi', '3456789012', '17-10-2005', 'Active', 'Current', 8000.00),
(105, 'E123', 'Samarth', 'Surat', '8901234567', '18-10-2004', 'Active', 'Savings', 6000.00);

```

3. Insert Dummy Data into the Loan Table

```
INSERT INTO Loan (loan_no, branch_id, account_holder_id, loan_amount, loan_type) VALUES
(1001, 1, 101, 2000.00, 'Personal Loan'),
(1002, 2, 102, 5000.00, 'Home Loan'),
(1003, 3, 103, 3000.00, 'Car Loan'),
(1004, 1, 104, 4000.00, 'Education Loan'),
(1005, 4, 105, 7000.00, 'Business Loan');

```