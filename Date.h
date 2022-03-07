#pragma once
class Date
{
private:
	int day;
	int month;
	int year;

	//Date *next;//next Date
public:
	// day
	int	getDay() { return this->day; }
	void setDat(int day) { this->day = day; }
	// month
	int	getMonth() { return this->month; }
	void setMonth(int month) { this->month = month; }
	// year
	int	getYear() { return this->year; }
	void setYear(int year) { this->year = year; }
	// next
	/*Date *getNext() { return this->next; }
	void setNext(Date *next) { this->next = next; }*/

	Date(int day, int month, int year);
	~Date();
	void print();
	bool compareDate(int day, int month, int year);
};

