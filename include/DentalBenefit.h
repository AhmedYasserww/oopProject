#include "Benefit.h"
#ifndef DENTALBENEFIT_H
#define DENTALBENEFIT_H
class DentalBenefit :public Benefit
{
protected:
	string info;
public:
	DentalBenefit();
    virtual double calculate_benifit(){return 0.1*amount;}
	string get_detailes();


};

#endif
