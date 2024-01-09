// ex38_6_48.cpp : Circle Area
// inline function that calculates the area of a circle
#include <iostream>
#include <cmath> // function sqrt
using namespace std;

const PI{ 3.14159 }; // define global constant PI

// area = pi * radius^2
inline double area(const double radius) {
	return PI * sqrt(radius);
}

int main()
{
	double radius; // stores the value entered by user
	cout << "Enter the radius of your circle: ";
	cin >> radius; // read value from user

	// compute circle area and display result
	cout << "The area of a circle with radius "
		<< radius << " is " << area(radius) << endl;
}