#pragma once
#include <list>
#include <string>
#include "Student.h"
#include "Teacher.h"

class Department
{
private:
	int dept_id;
	std::string dept_name;
	int uni_id{};
public:
	std::list<Teacher*> teachers;
	std::list<Student*> students;

	Department();
	Department(int id, std::string name, int uniId);
	int get_dept_id() const;
	int get_uni_id() const;
	std::string get_dept_name() const;
	~Department();
};