#include "Benefit.h"
#ifndef HEALTHBENEFIT_H
#define HEALTHBENEFIT_H

class HealthBenefit :public Benefit
{
protected :
	string infro, converge;
public :
	HealthBenefit();
    virtual double calculate_benifit(){return 0.2 * amount;}
	string get_details();
};


#endif // HEALTHBENEFIT_H
