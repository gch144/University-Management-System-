#include "Teacher.h"

Teacher::Teacher() : first_name(""), last_name(""), specialization("")
{
}

Teacher::Teacher(int id,
	std::string fName,
	std::string lName,
	std::string speciality,
	Date* date) : id(id),
	first_name(std::move(fName)),
	last_name(std::move(lName)),
	specialization(std::move(speciality)),
	employement_date(date)
{
}

int Teacher::get_id() const
{
	return this->id;
}

std::string Teacher::get_first_name() const
{
	return this->first_name;
}

std::string Teacher::get_last_name() const
{
	return this->last_name;
}

std::string Teacher::get_specialization() const
{
	return this->specialization;
}

std::string Teacher::get_employment_date() const
{
	std::string date = std::to_string(this->employement_date->getDay()).append("/")
	.append(std::to_string(this->employement_date->getMonth()))
	.append("/").append(std::to_string(this->employement_date->getYear()));
	return date;
}

Teacher::~Teacher()
= default;
