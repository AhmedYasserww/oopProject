#include "Employee.h"
#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

class SalariedEmployee :public Employee
{
protected:
	double salary;
public:
	virtual string display_detailes();
	virtual void input();
	virtual double get_salary();
	SalariedEmployee(double s);
	SalariedEmployee();

};

#endif // SALARIEDEMPLOYEE_H
