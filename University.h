#pragma once
#include <list>
#include "Department.h"

using namespace std;
class University
{
private:
	int id;
	string university_name;
public:
	University();
	list<Department*> departments;

	University(int id, string name);
	int get_id() const;
	static void printUniversityDetails(const list<University*>& list);
	static void printDepartmentDetails(University* university);
	string get_university_name() const;
	~University();
};