#include "Employee.h"
#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

class HourlyEmployee :public Employee
{
protected:
	double hours_worked;
	double rate;
public:
	HourlyEmployee();
	string display_detailes();
	void input();
	double get_salary();
	HourlyEmployee(double hk, double ra);
    void addHours(double moreHours);
    double getHoursWorked();
    double getRate();
    void setRate(double rate);
};


#endif // HOURLYEMPLOYEE_H
