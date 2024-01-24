#include "DentalBenefit.h"

DentalBenefit::DentalBenefit()
{

}

string DentalBenefit::get_detailes()
{
    return  Benefit::display_benifit() + "the infro of dental benefit is " + info+"\n";

}

