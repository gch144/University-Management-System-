#pragma once
#include <string>

#include "Date.h"
#define MAX_SUBJECTS 6
class Student
{
private:
	int id;
	std::string firstName;
	std::string lastName;
	Date* dateOfBirth = new Date(01, 01, 1999); // to store day, month and year
	int yearOfStudy;
	int deptId; // stores department id of the student.
	int marks[MAX_SUBJECTS];
public:
	Student();
	Student(int id, std::string fName, std::string lName, Date* date, int yearOfStudy, int deptID);
	int get_id() const;
	std::string get_first_name() const;
	std::string get_last_name() const;
	std::string get_date_of_birth() const;
	int get_year_of_study() const;
	std::string get_grade() const;
	
	~Student();
};

