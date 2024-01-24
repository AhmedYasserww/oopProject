#include "Department.h"
#include <string>
#include <iostream>
using namespace std;

void Department::set_detailes__dep()
{
	cout << "enter department id : ";
	cin >> depart_id;
	cout << "enter department_name : ";
	cin >> depart_name;
}

void Department::print()
{
	cout << "the department id is : " << depart_id << endl;
	cout << "the department name is : " << depart_name << endl;
}


void Department::set_dep_id(int dep)
{
	depart_id = dep;
}

long long Department::get_dep_id()
{
	return depart_id;
}

void Department::set_dep_name(string na)
{
	depart_name = na;
}
string Department::get_dep_name()
{
	return depart_name;
}





Department::Department(int dep_id, string dep_name)
{
	depart_id = dep_id;
	depart_name = dep_name;
}

Department::Department()
{

}
