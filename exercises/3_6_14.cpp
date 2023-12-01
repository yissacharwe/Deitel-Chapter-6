// 3_6_13.cpp : Rounding Numbers
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;

double roundToInteger(double number);
double roundToTenths(double number);
double roundToHundredths(double number);
double roundToThousandths(double number);

const int numberOfValues = {3};

struct Number {
	double value{ 0 };
} number[numberOfValues];

int main()
{

	std::cout << "enter four floating point values \n";
	for (int i = 0; i < numberOfValues; i++)
		cin >> number[i].value;
	
	for (int i = 0; i < numberOfValues; i++)
	{
		std::cout << number[i].value << " rounded to nearest integer is " 
			<< roundToInteger(number[i].value) << endl;

		std::cout << number[i].value << " rounded to nearest tenth is " 
			<< setprecision(1) << roundToTenths(number[i].value) << endl;

		std::cout << number[i].value << " rounded to mearest hundredth is " 
			<< setprecision(2) << roundToHundredths(number[i].value) << endl;

		std::cout << number[i].value << " rounded to neartest thousandths is " 
			<< setprecision(3) << roundToThousandths(number[i].value) << endl;
		std::cout << "\n";
	} 

	return 0;
}

double roundToInteger(double number) 
{ 
	return floor(number + 0.5); 
}

double roundToTenths(double number)
{ 
	return floor(number * 10 + 0.5) / 10; 
}

double roundToHundredths(double number)
{ 
	return floor(number * 100 + 0.5) / 100; 

}

double roundToThousandths(double number) 
{ 
	return floor(number * 1000 + 0.5) / 1000; 
}

	
