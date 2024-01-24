#include "Benefit.h"
#include <string>
#include <iostream>


Benefit::Benefit()
{

}

void Benefit::get_ben()
{
	cout << "Enter Plattype Of Benefit(basic - platinum - gold) :"<<endl;
	cin >> plantype;
	cout << "Enter The amount Of Benefit : " << endl;
	cin >> amount;
	cout<<"Enter Enformation : " <<endl;
	cin>>infro;
}

/*double Benefit::calculate_benifit()
{
	return  amount ;
}*/

string Benefit::display_benifit()
{
return	"The Plan Type Of Benefit Is : " + plantype +"\n"+
		"The Amount Of Benefit Is : " + to_string (amount) + "\n" +
		"The information of benefit is : " + (infro)+"\n";
}
