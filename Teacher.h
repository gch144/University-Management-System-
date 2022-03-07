#pragma once
#include <string>
#include "Date.h"

class Teacher
{
private:
	int id;
	std::string first_name;
	std::string last_name;
	std::string specialization;
	Date* employement_date = new Date(01, 01, 1999);
public:
	Teacher();
	Teacher(int id, std::string fName, std::string lName, std::string speciality, Date* date);
	int get_id() const;
	std::string get_first_name() const;
	std::string get_last_name() const;
	std::string get_specialization() const;
	std::string get_employment_date() const;
	~Teacher();
};

