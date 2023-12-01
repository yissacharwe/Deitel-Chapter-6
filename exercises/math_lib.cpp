// math_lib.cpp : Testing the math library functions
#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	std::cout << "ceil(9.2) = " << ceil(9.2) << "\n"; // ceiling
	std::cout << "ceil(-9.8) = " << ceil(-9.8) << "\n";
	std::cout << "cos(0.0) = " << cos(0.0) << "\n"; // cosine of x (radian)
	std::cout << "exp(1.0) = " << exp(1.0) << "\n"; // exponential function e^x
	std::cout << "fabs(5.1) = " << fabs(5.1) << "\n"; // absolute value of x
	std::cout << "fabs(0.0) = " << fabs(0.0) << "\n";
	std::cout << "fabs(-8.76) = " << fabs(-8.76) << "\n";
	std::cout << "floor(9.2) = " << floor(9.2) << "\n"; // floor
	std::cout << "floor(-9.8) = " << floor(-9.8) << "\n";
	std::cout << "fmod(2.6, 1.2) = " << fmod(2.6, 1.2) << "\n"; // floating point remainder
	std::cout << "log(2.718282) = " << log(2.718282) << "\n"; // natural logarithm of x (base e)
	std::cout << "log(7.3829056) = " << log(7.3829056) << "\n";
	std::cout << "log10(10.0) = " << log10(10.0) << "\n"; // logarithm of x (base 10)
	std::cout << "log10(100.0) = " << log10(100.0) << "\n";
	std::cout << "pow(2, 7) = " << pow(2, 7) << "\n"; // x raised to power y
	std::cout << "pow(9, .5) = " << pow(9, .5) << "\n"; //
	std::cout << "sin(0.0) = " << sin(0.0) << "\n"; // sine of x (radian)
	std::cout << "sqrt(9.0) = " << sqrt(9.0) << "\n"; //
	std::cout << "tan(0.0) = " << tan(0.0) << "\n"; // tangent (radian)

}