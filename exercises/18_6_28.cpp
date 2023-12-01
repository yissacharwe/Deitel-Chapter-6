// 18_6_28.cpp : Perfect Numbers
// 19_6_29.cpp : Prime Numbers
// 20_6_30.cpp : Reverse Digits
// 21_6_31.cpp : Greatest Common Divisor
// 22_6_32.cpp : Quality Points for Numeric Grades

#include <iostream>
using namespace std;

bool isPrime(int number);
bool isPerfect(int number);
void printDivisors(int number);
int reverseDigits(int number);
int gcd(int a, int b);
int qualityPoints(int average);

int main()
{
	cout << RAND_MAX;
}

// return quality points
int qualityPoints(int average)
{
	if (average >= 90)
		return 4;
	else if (average >= 80)
		return 3;
	else if (average >= 70)
		return 2;
	else if (average >= 60)
		return 1;
	else // average grade is less than 60
		return 0;
}

// return greatest common divisor
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

// reverse digits order
int reverseDigits(int number)
{
	int reversedNumber{ 0 };
	while (number > 0) {
		reversedNumber *= 10;
		reversedNumber += number % 10;
		
		number /= 10;
	}
	return reversedNumber;
}

/*
An integer is said to be a perfect number if the sum of its divisors,
including 1 (but not the number itself), is equal to the number. 
*/
bool isPerfect(int number)
{
	int sumOfDivisors{ 0 };
	for (int i = 1; i <= number / 2; i++)
	{
		if (number % i == 0) { // determine whether i is a divisor of number
			sumOfDivisors += i;
		}
	}
	if (sumOfDivisors == number)
		return true;
	return false;
}

// print divisors
void printDivisors(int number)
{
	for (int i = 1; i <= (number / 2); i++)
		if (number % i == 0)
			cout << " " << i;
}

// return true if number is prime
bool isPrime(int number)
{
	int upperLimit{ static_cast<int>(sqrt(number)) }; // highest possible 
	for (int i = 2; i < upperLimit; i++)
	{
		if (number % i == 0)
			return false;
	}
	return true;
}