// 26_6_36.cpp : Recursive Exponentiation
// 27_6_37.cpp : Fibonacci Series: Iterative Solution
#include <iostream>
using namespace std;

unsigned long fibonacci(int number);
int power(int base, int exponent);

int main()
{
	// calculate the fibonacci values of 0 through 10
	for (unsigned int counter{ 0 }; counter <= 10; ++counter)
		cout << "fibonacci(" << counter << ") = "
			<< fibonacci(counter) << endl;

	// display higher fibonacci values
	cout << "\nfibonacci(20) = " << fibonacci(20) << endl;
	cout << "\nfibonacci(30) = " << fibonacci(30) << endl;
	cout << "\nfibonacci(35) = " << fibonacci(35) << endl;
}

// iterative function fibonacci
unsigned long fibonacci(int number)
{
	if (number == 0 || number == 1)
		return number;

	int num1{ 0 };
	int num2{ 1 };
	int temp = 0, result = 0;

	while (number > 1)
	{
		result = (num1 + num2);
		temp = num2;
		num2 = num1 + num2;
		num1 = temp;
		--number;
	}

	return result;
}

// return the value of base in the power of exponent
int power(int base, int exponent)
{
	if (exponent == 1)
		return base;
	return base * power(base, --exponent);
}