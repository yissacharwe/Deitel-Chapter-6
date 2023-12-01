// 16_6_26.cpp : Celsius and Fahrenheit Temperatures
#include <iostream>
#include <iomanip>
using namespace std;

int celsius(int fahrenheit); // returns the celsius equivalent
int fahrenheit(int celsius); // returns the fahrenheit equivalent


int main()
{
	const int WIDTH = 9;
	cout << "Celsius to Fahrenheit:\n" << endl;
	cout << left << setw(WIDTH) << "C" << setw(WIDTH) << "F" << setw(WIDTH)
		<< "\tC" << setw(WIDTH) << "F" << setw(WIDTH)
		<< "\tC" << setw(WIDTH) << "F" << setw(WIDTH)
		<< "\tC" << setw(WIDTH) << "F" << endl;

	for (int cels = 0; cels <= 25; cels++)
	{
		cout << setw(WIDTH) << cels << setw(WIDTH) << fahrenheit(cels) << "\t"
			<< setw(WIDTH) << cels + 25 << setw(WIDTH) << fahrenheit(cels + 25) << "\t"
			<< setw(WIDTH) << cels + 50 << setw(WIDTH) << fahrenheit(cels + 50) << "\t"
			<< setw(WIDTH) << cels + 75 << setw(WIDTH) << fahrenheit(cels + 75) << endl;
	}

	cout << "\n\nFahrenheit to Celsius:\n" << endl;
	cout << setw(WIDTH) << "F" << setw(WIDTH) << "C" << setw(WIDTH)
		<< "\tF" << setw(WIDTH) << "C" << setw(WIDTH)
		<< "\tF" << setw(WIDTH) << "C" << setw(WIDTH)
		<< "\tF" << setw(WIDTH) << "C" << setw(WIDTH)
		<< "\tF" << setw(WIDTH) << "C" << setw(WIDTH)
		<< "\tF" << setw(WIDTH) << "C" << endl;

	for (int fahr = 32; fahr <= 62; fahr++)
	{
		cout << setw(WIDTH) << fahr << setw(WIDTH) << celsius(fahr) << "\t"
			<< setw(WIDTH) << fahr + 30 << setw(WIDTH) << celsius(fahr + 30) << "\t"
			<< setw(WIDTH) << fahr + 60 << setw(WIDTH) << celsius(fahr + 60) << "\t"
			<< setw(WIDTH) << fahr + 90 << setw(WIDTH) << celsius(fahr + 90) << "\t"
			<< setw(WIDTH) << fahr + 120 << setw(WIDTH) << celsius(fahr + 120) << "\t"
			<< setw(WIDTH) << fahr + 150 << setw(WIDTH) << celsius(fahr + 150) << "\t" << endl;
	}

}

// return the celsius equivalent
int celsius(int fahrenheit)
{
	// C = (F - 32) * 5/9
	return static_cast<int> (fahrenheit - 32) * (5.0 / 9.0);
}

// returns the fahrenheit equivalent
int fahrenheit(int celsius)
{
	// F = (C * 9/5) + 32 
	return static_cast<int> (celsius * (9.0 / 5.0)) + 32;
}