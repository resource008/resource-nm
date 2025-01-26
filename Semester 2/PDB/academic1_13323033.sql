CREATE DATABASE academic;
USE academic;

CREATE TABLE student(
	reg_number INT NOT NULL,
	date_of_joining DATE NOT NULL,
	date_of_birth DATE NOT NULL,
	NAME CHAR(50) NOT NULL,
	address CHAR(50) NOT NULL,
	phone CHAR(20) NOT NULL
);

ALTER TABLE student ADD CONSTRAINT
studentPK PRIMARY KEY(reg_number);

CREATE TABLE faculty(
	faculty_id INT NOT NULL,
	faculty_name CHAR(50) NOT NULL,
	faculty_address CHAR(50) NOT NULL,
	phone CHAR(20) NOT NULL
);

ALTER TABLE faculty ADD CONSTRAINT
facultyPK PRIMARY KEY(faculty_id);

CREATE TABLE course (
	course_id INT NOT NULL,
	faculty_id INT NOT NULL,
	course_name CHAR(50) NOT NULL,
	duration INT NOT NULL,
	fee INT NOT NULL
);

ALTER TABLE course ADD CONSTRAINT
coursePK PRIMARY KEY(course_id);

ALTER TABLE course ADD CONSTRAINT 
courseFK FOREIGN KEY(faculty_id) REFERENCES faculty(faculty_id);

CREATE TABLE student_course(
	reg_number INT NOT NULL,
	course_id INT NOT NULL,
	nilai INT NOT NULL
);

ALTER TABLE student_course ADD CONSTRAINT
student_coursePK PRIMARY KEY(reg_number, course_id);

ALTER TABLE course
ADD COLUMN credit INT,
ADD COLUMN initial CHAR(50);

ALTER TABLE student
DROP COLUMN DATE_OF_JOINING;



