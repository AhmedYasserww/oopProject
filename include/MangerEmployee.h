#include "SalariedEmployee.h"
#ifndef MANGEREMPLOYEE_H
#define MANGEREMPLOYEE_H
class MangerEmployee : public SalariedEmployee
{
protected:
	double bouns;
public:
	MangerEmployee();
	MangerEmployee(double, double);
	string display_detailes();
	void input();
	double get_salary();
    void addBouns(double moreBonus);
    double getBonus();
};
#endif

