/*
	Nama	: Agus Pranata Marpaung
	NIM	: 13323033
	Kelas	: 31TK2
*/

-- Tugas 1

-- 1. Menampilkan semua data customer.
SELECT * FROM customers;

-- 2. Menampilkan 5 data paling atas semua data customer yang tinggal di negara Brazil.
SELECT * FROM customers WHERE Country = 'Brazil' LIMIT 5;

-- 3. Menampilkan data customer yang huruf kedua contact name nya adalah huruf r. 5 rows
SELECT * FROM customers WHERE SUBSTRING(ContactName, 2, 1) = 'r';

-- 4. Menampilkan data customer yang tinggal di negara Germany baik di kota Berlin ataupun Munchen. 1 row
SELECT * FROM customers WHERE Country = 'Germany' AND (City = 'Berlin' OR City = 'Munchen');

-- 5. Menampilkan data customer dengan mengurutkan country dari yang terkecil hingga terbesar dan contact name nya dari yang terbesar hingga yang terkecil. 93 rows
SELECT * FROM customers ORDER BY Country ASC, ContactName DESC;

-- Tugas 2

-- No.1
SELECT OrderID, FORMAT(SUM(UnitPrice * Quantity * (1 - Discount)), 2) AS Subtotal
FROM orderdetails
GROUP BY OrderID
ORDER BY OrderID;

-- No.2
SELECT o.OrderID, o.orderdate, c.contactname
FROM Customers AS c, Orders AS o
WHERE c.ContactName = "Yang Wang"
AND c.CustomerID = o.CustomerID;

-- No.3
SELECT Orders.OrderID, Customers.ContactName, Orders.OrderDate
FROM Orders
INNER JOIN Customers
ON Orders.CustomerID = Customers.CustomerID;

-- No.4
SELECT Customers.ContactName, Orders.OrderID FROM Customers
LEFT JOIN Orders ON Customers.CustomerID = Orders.CustomerID
ORDER BY Customers.ContactName;

-- No.5
SELECT Orders.OrderID, Employees.LastName, Employees.FirstName
FROM Orders
RIGHT JOIN Employees
ON Orders.EmployeeID = Employees.EmployeeID
ORDER BY Orders.OrderID;

-- No.6
SELECT A.ContactName AS CustomerName1, B.ContactName 
AS CustomerName2, A.City
FROM Customers A, Customers B
WHERE A.CustomerID <> B.CustomerID
AND A.City = B.City
ORDER BY A.City;

-- No.7
SELECT City, Country FROM Customers
WHERE Country='Germany'
UNION SELECT City, Country FROM Suppliers
WHERE Country='Germany'
ORDER BY City;

-- No.8
SELECT Shippers.CompanyName, COUNT(Orders.OrderID) 
AS NumberOfOrders FROM Orders
LEFT JOIN Shippers ON Orders.ShipVia = Shippers.ShipperID
GROUP BY Shippers.CompanyName;


-- No.9
SELECT Employees.LastName, COUNT(Orders.OrderID) 
AS NumberOfOrders FROM Orders 
INNER JOIN Employees 
ON Orders.EmployeeID = Employees.EmployeeID 
GROUP BY LastName HAVING COUNT(Orders.OrderID) > 10;

-- No.10
SELECT CompanyName
FROM Suppliers
WHERE EXISTS (SELECT ProductName FROM Products
WHERE SupplierId = Suppliers.supplierId AND UnitPrice < 20);

-- No.11
SELECT * FROM (SELECT Customers.CompanyName, Orders.OrderID
FROM Customers
LEFT JOIN Orders ON Customers.CustomerID = Orders.CustomerID
UNION
SELECT Customers.CompanyName, Orders.OrderID
FROM Orders
LEFT JOIN Customers ON Customers.CustomerID = Orders.CustomerID) AS Result
ORDER BY Result.CompanyName;

-- Tugas 3

-- 1
SELECT Customers.CompanyName, Orders.OrderID
FROM Customers
INNER JOIN Orders ON Customers.CustomerID = Orders.CustomerID;

-- 2
SELECT Customers.CompanyName, Orders.OrderID
FROM Customers
LEFT JOIN Orders ON Customers.CustomerID = Orders.CustomerID;

-- 3
SELECT Customers.CompanyName, Orders.OrderID
FROM Customers
RIGHT JOIN Orders ON Customers.CustomerID = Orders.CustomerID;

-- 4
SELECT Customers.CompanyName, Orders.OrderID
FROM Customers
LEFT JOIN Orders ON Customers.CustomerID = Orders.CustomerID
UNION
SELECT Customers.CompanyName, Orders.OrderID
FROM Orders
LEFT JOIN Customers ON Customers.CustomerID = Orders.CustomerID;

-- 5
SELECT Customers.CompanyName, Products.ProductName
FROM Customers
CROSS JOIN Products;