#include "University.h"



#include <iostream>
#include <ostream>
#include <utility>

University::University() {
	this->id = 0;
	this->university_name = "";
}

University::University(const int id, string name) : id(id), university_name(std::move(name))
{
}


int University::get_id() const
{
	return this->id;
}

void University::printUniversityDetails(const list<University*>& universities)
{
	for (auto* university : universities)
		printDepartmentDetails(university);
}

string University::get_university_name() const
{
	return this->university_name;
}

void University::printDepartmentDetails(University* university)
{
	cout << "****************************************" << endl;
	cout << "University Name: " << university->get_university_name() << endl;
	cout << "Total Departments: " << university->departments.size() << endl;
	if (!university->departments.empty())
		cout << "Sr. #\t\tDepartment name" << endl;
	for (auto* dept : university->departments)
	{
		cout << dept->get_dept_id() << "\t\t  " << dept->get_dept_name() << std::endl;

		if (!dept->teachers.empty())
		{
			cout << "Teachers in " << dept->get_dept_name() << " Department" << endl;
			cout << "Sr. #\tFirst Name \t Last Name \t Specialization \t Date of Employment" << endl;
			for (auto* teacher : dept->teachers)
			{
				cout << teacher->get_id() << "\t" << teacher->get_first_name() << "\t\t" << teacher->get_last_name() << "\t\t" << teacher->get_specialization() << "\t" << teacher->get_employment_date() << endl;
			}
		}

		if (!dept->students.empty())
		{
			cout << endl << endl;
			cout << "Students in " << dept->get_dept_name() << " Department" << endl;

			cout << "Sr. # \t First Name \t Last Name \t Grade" << endl;
			for (auto* student: dept->students)
			{
				cout << student->get_id() << "\t\t" << student->get_first_name() << "\t\t" << student->get_last_name() << "\t\t" << student->get_grade() << endl;
			}
		}
		
		cout << "****************************************" << endl;
		cout << endl;
	}
}

University::~University()
= default;
