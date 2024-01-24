#include "SalariedEmployee.h"
string SalariedEmployee::display_detailes()
{
	return Employee::display_detailes() + "the salary is :" + to_string(salary)+"\n";
}

void SalariedEmployee::input()
{
	Employee::input();
	cout << "enter salary : ";
	cin >> salary;
}

double SalariedEmployee::get_salary()
{
	return salary;
}

SalariedEmployee::SalariedEmployee(double s)
{
	salary = s;
}

SalariedEmployee::SalariedEmployee()
{

}
