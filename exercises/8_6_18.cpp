// 8_6_18.cpp : Exponentiation
#include <iostream>
using namespace std;

// returns the value of base^exponent
int integerPower(int, unsigned int);

int main()
{
	int base{ 0 }; // base number
	unsigned int pow{ 0 }; // exponent

	cout << "enter base and exponenet " << endl;
	cin >> base >> pow;

	cout << integerPower(base, pow) << endl;
}

int integerPower(int base, unsigned int pow)
{
	int result{1};
	while (pow > 0)
	{
		result *= base;
		--pow;
	}
	return result;
}