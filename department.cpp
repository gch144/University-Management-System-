#include "department.h"
#include <ostream>


Department::Department() : dept_id(0), dept_name("")
{
}

Department::Department(const int id, std::string name, int uniId) : dept_id(id), dept_name(std::move(name)), uni_id(uniId)
{
}


int Department::get_dept_id() const
{
	return this->dept_id;
}

int Department::get_uni_id() const
{
	return this->uni_id;
}


std::string Department::get_dept_name() const
{
	return this->dept_name;
}



Department::~Department()
= default;
