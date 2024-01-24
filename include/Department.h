#include <string.h>
#include <iostream>
#ifndef DEPARTMENT_H
#define DEPARTMENT_H

using namespace std;

class Department
{
private:
	long long depart_id;
	string depart_name;
int count;
public:
	void set_detailes__dep();
	void print();

	void set_dep_id(int);
	long long get_dep_id();
	void set_dep_name(string na);
	string get_dep_name();
	void set_sallry();
	Department(int dep_id, string dep_name);
	Department();
};
#endif // DEPARTMENT_H
