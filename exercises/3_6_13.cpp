// 3_6_13.cpp : Rounding Numbers
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;

int roundToInteger(double number);
int roundToTenths(double number);
int roundToHundredths(double number);
int roundToThousandths(double number);

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
		std::cout << number[i].value << " rounded to nearest integer is " << roundToInteger(number[i].value) << endl;
		std::cout << number[i].value << " rounded to nearest tenth is " << roundToTenths(number[i].value) << endl;
		std::cout << number[i].value << " rounded to mearest hundredth is " << roundToHundredths(number[i].value) << endl;
		std::cout << number[i].value << " rounded to neartest Hundredth is " << roundToThousandths(number[i].value) << endl;
		std::cout << "\n";
	}

	return 0;
}

int roundToInteger(double number) { return floor(number + 0.5); }
int roundToTenths(double number) { return floor(number * 10 + 0.5) / 10; }
int roundToHundredths(double number) { return floor(number * 100 + 0.5) / 100; }
int roundToThousandths(double number) { return floor(number * 10000 + 0.5) / 10000; }

	
