#include "Date.h"

#include <iostream>

Date::Date(const int day, const int month, const int year) {
	this->day = day;
	this->month = month;
	this->year = year;
}
Date::~Date() = default;

void Date::print() {
	std::cout << this->getDay() << "/" << this->getMonth() << "/" << this->getYear();
}
bool Date::compareDate(const int day, const int month, const int year) {
	if ((this->getDay() == day) && (this->getMonth() == month) && (this->getYear() == year))
		return true;

	return false;
}