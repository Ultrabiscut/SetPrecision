#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declare variables
	double dVal = 4321.12;

	//By default, C++ is set to display floating point numbers
	//in scientific notation
	cout << "Line 1: " << dVal << endl;

	//Use fixed manipulator to force C++ to display floating point numbers
	//in fixed decimal format
	cout << fixed;
	cout << "Line 2: " << dVal << endl;

	//Set the precision to 3 significant digits
	cout << setprecision(2);
	cout << "Line 3: " << dVal << endl;

	//Use scientific manipulator to switch to scientific notation
	cout << scientific;
	cout << "Line 4: " << dVal << endl;

	cout << setprecision(8);
	cout << "Line 5: " << dVal << endl;
	return 0;
}