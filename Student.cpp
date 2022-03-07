#include "Student.h"

Student::Student() : id(0), firstName(""), lastName(""), yearOfStudy(2021), deptId(0), marks{ }
{
}

Student::Student(int id, std::string fName, std::string lName, Date* date, int yearOfStudy, int deptID)
	: id(id), firstName(fName), lastName(lName), yearOfStudy(yearOfStudy), deptId(deptID)
{

}

int Student::get_id() const
{
	return this->id;
}

std::string Student::get_first_name() const
{
	return this->firstName;
}

std::string Student::get_last_name() const
{
	return this->lastName;
}

std::string Student::get_date_of_birth() const
{
	std::string date = this->dateOfBirth->getDay() + "/" + this->dateOfBirth->getMonth();
	date += "/" + this->dateOfBirth->getYear();
	return date;
}

int Student::get_year_of_study() const
{
	return yearOfStudy;
}

std::string Student::get_grade() const
{
	double marks = 0;
	for (auto number : this->marks)
		marks += number;

	marks = marks / 6;
	return  marks > 90 ? "A+" : marks >= 80 && marks < 90 ? "B" : marks >= 70 && marks < 80 ? "C" : "F";
}

Student::~Student()
= default;
