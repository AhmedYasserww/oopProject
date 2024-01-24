#include "MangerEmployee.h"
#include <iostream>
using namespace std;

MangerEmployee::MangerEmployee()
{

}

MangerEmployee::MangerEmployee(double bo, double salary) :SalariedEmployee(salary)
{
	bouns = bo;
}

string MangerEmployee::display_detailes()
{
	return SalariedEmployee::display_detailes() + "the bouns is : " + to_string(bouns)+"\n";
}

void MangerEmployee::input()
{
	SalariedEmployee::input();
	cout << "enter the bouns : ";
	cin >> bouns;
}

double MangerEmployee::get_salary()
{
	return salary + bouns;
}
void MangerEmployee::addBouns(double moreBonus)
{
    bouns += moreBonus;

}
double MangerEmployee::getBonus()
{
     return bouns;
}



