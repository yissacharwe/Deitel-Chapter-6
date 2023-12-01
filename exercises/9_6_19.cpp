// 9_6_19.cpp : Hypotenuse Calculations
// 10_6.20.cpp : Multiples
// 11_6.21.cpp : Even numbers
// 12_6_22.cpp : Square of Asterisks
// 13_6_23.cpp : Square of Any Characters
// 14_6_24.cpp : Separating Digits

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double hypotenuse(double, double); // computes the hypotenuse of a right triangle
bool isMultiple(int, int); // returns true if the second number is a multiple of the first
bool isEven(int); // returns true if the number is even
void drawSquare(unsigned int side); // dispalys a square of asterisks
void drawSquare(unsigned int side, char fillCharacter); // dispalys a square
void printDigits(unsigned int number); // prints digits separately

int main()
{
	printDigits(2);
}

// print the digits separately
void printDigits(unsigned int number)
{
	int numOfDigits{0};
	int nextDigit{0}; // next digit to print

	for (int i = number; i > 0; i /= 10)
		numOfDigits++;

	for (int i = numOfDigits; i > 0; i--)
	{
		int divisor{ static_cast<int> (pow(10, --numOfDigits)) };
		nextDigit = number / divisor;
			cout << nextDigit;

		number %= divisor;
		if (number > 0)
			cout << "  ";

		divisor /= 10;
	}
	cout << "\n";
}


// draw a customized character square
void drawSquare(unsigned int side, char fillCharacter)
{
	for (int i = side; i > 0; i--)
	{
		for (int j = side; j > 0; j--)
		{
			cout << fillCharacter;
		}
		cout << "\n";
	}
}

// draw a square of asterisks
void drawSquare(unsigned int side)
{
	for (int i = side; i > 0; i--)
	{
		for (int j = side; j > 0; j--)
		{
			cout << "*";
		}
		cout << "\n";
	}
}

//---------------------------------------------------------------

// determine if the number is even
bool isEven(int num)
{
	return num % 2 == 0;
}


// return true if the second number is a multiple of the first
bool isMultiple(int num1, int num2)
{
	return (num2 % num1 == 0);
}

// calculate the hypotenuse of a right triangle
// (hypotenuse = the side opposite the right angle)
double hypotenuse(double side1, double side2)
{
	return sqrt(pow(side1, 2) + pow(side2, 2));
}
