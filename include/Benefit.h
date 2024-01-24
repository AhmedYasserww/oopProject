#include <string.h>
#include <iostream>
#ifndef BENEFIT_H
#define BENEFIT_H

using namespace std;
class Benefit
{
protected:
	string plantype;
	double amount;
	string infro;
public:
	Benefit();
	virtual void get_ben();
    virtual double calculate_benifit()=0;

	virtual string display_benifit();

};
#endif


