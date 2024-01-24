#include "Employee.h"
#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H

class CommissionEmployee :public Employee
{
protected:
	double target;
	double rate;
public:
	CommissionEmployee();
	string display_detailes();
	void input();
	double get_salary();
	CommissionEmployee(double ta, double rt);
};
#endif
