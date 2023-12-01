// 17_6_27.cpp : Find the Minimum
#include <iostream>
#include <iomanip>
using namespace std;

double minimum(double x, double y, double z);

int main()
{
	cout << "Enter three floating point values: ";
	double num1, num2, num3;
	cin >> num1 >> num2 >> num3;

	// invoke minimum
	cout << "The minimum floating point value is: "
		<< minimum(num1, num2, num3) << endl;
}

// returns the smallest of three floating point numbers
double minimum(double x, double y, double z)
{
	double minimumValue{ x }; // assume x is the smallest to start

	// determine wheter y is smaller than minimumValue
	if (y < minimumValue) {
		minimumValue = y;
	}

	// determine whether z is smaller than minimumValue
	if (z < minimumValue) {
		minimumValue = z;
	}

	return minimumValue;
}