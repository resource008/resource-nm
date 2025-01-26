-- Table Branch
CREATE TABLE Branch (
    branchNo VARCHAR(255) NOT NULL,
    street VARCHAR(255),
    city VARCHAR(255),
    postcode VARCHAR(255),
    PRIMARY KEY (branchNo)
);

INSERT INTO Branch (branchNo, street, city, postcode) VALUES
('B005', '22 Deer Rd', 'London', 'SW1 4EH'),
('B007', '16 Argyll St', 'Aberdeen', 'AB2 3SU'),
('B003', '163 Main St', 'Glasgow', 'G11 9QX'),
('B004', '32 Manse Rd', 'Bristol', 'BS99 INZ'),
('B002', '56 Clover Dr', 'London', 'NW10 6EU');

SELECT * FROM Branch;

-- Table Staff
CREATE TABLE Staff (
    staffNo VARCHAR(10) NOT NULL,
    fName VARCHAR(50),
    lName VARCHAR(50),
    POSITION VARCHAR(50),
    sex CHAR(1),
    DOB DATE,
    salary DECIMAL(10, 2),
    branchNo VARCHAR(10),
    PRIMARY KEY (staffNo)
);

INSERT INTO Staff (staffNo, fName, lName, POSITION, sex, DOB, salary, branchNo) VALUES
('SL21', 'John', 'White', 'Manager', 'M', '1945-10-01', 30000, 'B005'),
('SG37', 'Ann', 'Beech', 'Assistant', 'F', '1960-11-10', 12000, 'B003'),
('SG14', 'David', 'Ford', 'Supervisor', 'M', '1958-03-24', 18000, 'B003'),
('SA9', 'Mary', 'Howe', 'Assistant', 'F', '1970-02-19', 9000, 'B007'),
('SG5', 'Susan', 'Brand', 'Manager', 'F', '1940-06-03', 24000, 'B003'),
('SL41', 'Julie', 'Lee', 'Assistant', 'F', '1965-06-13', 9000, 'B005');

SELECT * FROM Staff;

-- Table PropertyForRent
CREATE TABLE PropertyForRent (
    propertyNo VARCHAR(10) NOT NULL,
    street VARCHAR(50),
    city VARCHAR(50),
    postcode VARCHAR(10),
    TYPE VARCHAR(50),
    rooms INT,
    rent DECIMAL(10, 2),
    ownerNo VARCHAR(10),
    staffNo VARCHAR(10),
    branchNo VARCHAR(10),
    PRIMARY KEY (propertyNo)
);

INSERT INTO PropertyForRent (propertyNo, street, city, postcode, TYPE, rooms, rent, ownerNo, staffNo, branchNo) VALUES
('PA14', '16 Holhead', 'Aberdeen', 'AB7 5SU', 'House', 6, 650, 'CO46', 'SA9', 'B007'),
('PL94', '6 Argyll St', 'London', 'NW2', 'Flat', 4, 400, 'CO87', 'SL41', 'B005'),
('PG4', '6 Lawrence St', 'Glasgow', 'G11 9QX', 'Flat', 3, 350, 'CO40', '0', 'B003'),
('PG36', '2 Manor Rd', 'Glasgow', 'G32 4QX', 'Flat', 3, 375, 'CO93', 'SG37', 'B003'),
('PG21', '18 Dale Rd', 'Glasgow', 'G12', 'House', 5, 600, 'CO87', 'SG37', 'B003'),
('PG16', '5 Novar Dr', 'Glasgow', 'G12 9AX', 'Flat', 4, 450, 'CO93', 'SG14', 'B003');

SELECT * FROM PropertyForRent;

UPDATE PropertyForRent
SET staffNo = NULL
WHERE propertyNo = 'PG4';

-- Table Client
CREATE TABLE CLIENT (
    clientNo VARCHAR(10) NOT NULL,
    fName VARCHAR(50),
    lName VARCHAR(50),
    telNo VARCHAR(20),
    prefType VARCHAR(20),
    maxRent DECIMAL(10, 2),
    eMail VARCHAR(100),
    PRIMARY KEY (clientNo)
);

INSERT INTO CLIENT (clientNo, fName, lName, telNo, prefType, maxRent, eMail) VALUES
('CR76', 'John', 'Kay', '0207-774-5632', 'Flat', 425, 'john.kay@gmail.com'),
('CR56', 'Aline', 'Stewart', '0141-848-1825', 'Flat', 350, 'astewart@hotmail.com'),
('CR74', 'Mike', 'Ritchie', '01475-392178', 'House', 750, 'mritchie01@yahoo.co.uk'),
('CR62', 'Mary', 'Tregear', '01224-196720', 'Flat', 600, 'maryt@hotmail.co.uk');

SELECT * FROM CLIENT;

-- Table PrivateOwner
CREATE TABLE PrivateOwner (
    ownerNo VARCHAR(10) NOT NULL,
    fName VARCHAR(50),
    lName VARCHAR(50),
    address VARCHAR(100),
    telNo VARCHAR(20),
    eMail VARCHAR(100),
    PASSWORD VARCHAR(100),
    PRIMARY KEY (ownerNo)
);

INSERT INTO PrivateOwner (ownerNo, fName, lName, address, telNo, eMail, PASSWORD) VALUES
('C046', 'Joe', 'Keogh', '2 Fergus Dr, Aberdeen AB2 7SX', '01224-861212', 'jkeogh@lhh.com', ''),
('C087', 'Carol', 'Farrel', '6 Achray St, Glasgow G32 9DX', '0141-357-7419', 'cfarrel@gmail.com', ''),
('C040', 'Tina', 'Murphy', '63 Well St, Glasgow G42', '0141-943-1728', 'tinam@hotmail.com', ''),
('C093', 'Tony', 'Shaw', '12 Park Pl, Glasgow G4 OQR', '0141-225-7025', 'tony.shaw@ark.com', '');

SELECT * FROM PrivateOwner;

-- Table Viewing
CREATE TABLE Viewing (
    clientNo VARCHAR(10) NOT NULL,
    propertyNo VARCHAR(10) NOT NULL,
    viewDate DATE,
    COMMENT VARCHAR(255),
    PRIMARY KEY (clientNo, propertyNo)
);

INSERT INTO Viewing (clientNo, propertyNo, viewDate, COMMENT) VALUES
('CR56', 'PA14', '2013-05-24', 'too small'),
('CR76', 'PG4', '2013-04-20', 'too remote'),
('CR56', 'PG4', '2013-05-26', NULL),
('CR62', 'PA14', '2013-05-14', 'no dining room'),
('CR56', 'PG36', '2013-04-28', NULL);

SELECT * FROM Viewing;

-- Table Registration
CREATE TABLE Registration (
    clientNo VARCHAR(10) NOT NULL,
    branchNo VARCHAR(10) NOT NULL,
    staffNo VARCHAR(10) NOT NULL,
    dateJoined DATE,
    PRIMARY KEY (clientNo, branchNo, staffNo)
);

INSERT INTO Registration (clientNo, branchNo, staffNo, dateJoined) VALUES
('CR76', 'B005', 'SL41', '2013-01-02'),
('CR56', 'B003', 'SG37', '2012-04-11'),
('CR74', 'B003', 'SG37', '2011-11-16'),
('CR62', 'B007', 'SA9', '2012-03-07');