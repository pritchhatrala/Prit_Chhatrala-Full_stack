Lab 2: Create a PL/SQL block that calculates the total sales from an orders table.
```
DECLARE
  total_sales NUMBER;  -- Variable to store the total sales amount
BEGIN
  -- Retrieve the sum of sales from the orders table and store it in the total_sales variable
  SELECT SUM(sales_amount) INTO total_sales FROM orders;

  -- Output the total sales using DBMS_OUTPUT
  DBMS_OUTPUT.PUT_LINE('Total sales amount: ' || total_sales);
END;
/
```