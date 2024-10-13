/* 
Nama: Agus Pranata Marpaung
NIM : 13323033
Kelas: 31TK2
*/

-- Task 1
SELECT c.customerName, c.addressLine1, o.orderNumber, o.orderDate
FROM customers c
JOIN orders o ON c.customerNumber = o.customerNumber
LIMIT 10;

-- Task 2
SELECT c.customerName, p.paymentDate, p.amount
FROM customers c
JOIN payments p ON c.customerNumber = p.customerNumber
ORDER BY p.amount DESC
LIMIT 10;

-- Task 3
SELECT c.country, COUNT(p.checkNumber) AS paymentCount, SUM(p.amount) AS totalAmount
FROM customers c
INNER JOIN payments p ON c.customerNumber = p.customerNumber
GROUP BY c.country;

-- Task 4
SELECT m.employeeNumber AS managerNumber, CONCAT(m.firstName, ' ', m.lastName) AS managerName, e.employeeNumber AS employeeNumber, CONCAT(e.firstName, ' ', e.lastName) AS employeeName
FROM employees e
INNER JOIN employees m ON e.reportsTo = m.employeeNumber
ORDER BY m.lastName;

-- Task 5
SELECT e.employeeNumber, CONCAT(e.firstName, ' ', e.lastName) AS fullName, e.jobTitle, COUNT(*) AS subordinateCount
FROM employees e
INNER JOIN employees s ON e.employeeNumber = s.reportsTo
GROUP BY e.employeeNumber;

-- Task 6
SELECT c.customerName, c.phone, MAX(p.paymentDate) AS lastPaymentDate, COUNT(*) AS paymentCount
FROM customers c
INNER JOIN payments p ON c.customerNumber = p.customerNumber
GROUP BY c.customerNumber;

-- Task 7
SELECT c.customerNumber, c.customerName
FROM customers c
LEFT JOIN orders o ON c.customerNumber = o.customerNumber
WHERE o.orderNumber IS NULL;

-- Task 8
SELECT c.customerNumber, c.customerName, COUNT(o.orderNumber) AS orderCount
FROM customers c
INNER JOIN orders o ON c.customerNumber = o.customerNumber
GROUP BY c.customerNumber
HAVING COUNT(o.orderNumber) > 1
ORDER BY COUNT(o.orderNumber) DESC
LIMIT 10;

-- Task 9
SELECT o.orderNumber AS transactionNumber, o.orderDate AS transactionDate, p.productName, od.quantityOrdered AS productQuantity, p.MSRP AS pricePerUnit, (od.quantityOrdered * p.MSRP) AS totalPrice
FROM orders o
INNER JOIN orderdetails od ON o.orderNumber = od.orderNumber
INNER JOIN products p ON od.productCode = p.productCode;

-- Task 10
SELECT c.customerNumber AS customer_id, c.customerName AS customer_name, SUM(p.amount) AS totalAmountPaid
FROM customers c
INNER JOIN payments p ON c.customerNumber = p.customerNumber
GROUP BY c.customerNumber
HAVING COUNT(p.checkNumber) > 1;










