#include "HealthBenefit.h"
#include <string>
#include <iostream>
HealthBenefit::HealthBenefit()
{

}

string HealthBenefit::get_details()
{

   return Benefit::display_benifit() + "the Health Benefit is : " + to_string(amount) + "\n"
        + "the information is : " + infro + "\n"
        + "the converage is : " + converge + "\n";

    return string();
}
