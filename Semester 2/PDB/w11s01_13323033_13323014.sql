-- Nama	: Agus Pranata Marpaung
-- NIM	: 13323033
-- Kelas: 31TK2

-- Nama	: Tarorom Gurning
-- NIM	: 13323014
-- Kelas: 31TK1

-- Scalar Subquery
SELECT staffNo, fName, IName, POSITION
FROM Staff
WHERE branchNo = (SELECT b.branchNo FROM Branch b WHERE b.street = '163 Main St');

-- Using subquery with an aggregate function
SELECT staffNo, fName, IName, POSITION, ROUND(salary - (SELECT AVG(salary) FROM staff), 2) AS salDiff
FROM staff
WHERE salary > (SELECT AVG(salary) FROM staff);

-- Nested Subqueries: use of IN
SELECT propertyNo, street, city, postcode, TYPE, rooms, CAST(rent AS INT) AS rent
FROM PropertyForRent
WHERE staffNo IN (SELECT staffNo FROM Staff WHERE branchNo = (SELECT branchNo FROM Branch WHERE street = '163 Main St'));

-- Use of ANY/SOME
SELECT staffNo, fName, IName, POSITION, salary
FROM Staff
WHERE salary > SOME (SELECT salary FROM Staff WHERE branchNo = 'B003');

-- Use of ALL
SELECT staffNo, fName, IName, POSITION, salary
FROM Staff
WHERE salary > ALL (SELECT salary FROM Staff WHERE branchNo = 'B003');

-- Use of EXIST
SELECT staffNo, fName, IName, POSITION
FROM Staff s
WHERE EXISTS (SELECT *FROM Branch b WHERE s.branchNo = b.branchNo AND city = 'London');

-- Subquery with INSERT Statement (X)
INSERT INTO newbranch 
SELECT * FROM Branch 
WHERE branchNo IN ('B003', 'B002');

-- Subquery with UPDATE Statement
UPDATE Staff
SET POSITION = 'Assistant Manager'
WHERE salary = (SELECT MIN(salary)FROM Staff);

SELECT * FROM Staff

-- Subquery with DELETE Statement
DELETE FROM staff WHERE salary = (SELECT MIN(salary)FROM staff);

SELECT * FROM Staff

-- Use of Union
(SELECT city FROM Branch WHERE city IS NOT NULL) 
UNION
(SELECT city FROM PropertyForRent WHERE city IS NOT NULL);

-- Use of Intersect
(SELECT city FROM Branch)
INTERSECT
(SELECT city FROM PropertyForRent);

-- Use of Except
(SELECT city FROM Branch)
EXCEPT
(SELECT city FROM PropertyForRent);