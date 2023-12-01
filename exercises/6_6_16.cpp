// 6_6_16.cpp : Random Numbers
// 6_6_17.cpp : Random number (Continued)
// type variableName{shiftingValue + rand() % scalfingFactor}
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(static_cast<int>(time(0)));
	//cout << "A. " << (1 + rand() % 2) << endl;
	//cout << "B. " << (1 + rand() % 100) << endl;
	//cout << "C. " << (rand() % 9) << endl;
	//cout << "D. " << (1000 + rand() % 112) << endl;
	//cout << "E. " << (-1 + rand() % 1) << endl;
	//cout << "F. " << (-3 + rand() % 11) << "\n\n";
	
	cout << "A. " << (1 + rand() % 5) * 2 << endl; // 2, 4, 6, 8, 10
	cout << "B. " << (1 + rand() % 5) * 2 + 1 << endl; // 3, 5, 7, 9, 11
	cout << "C. " << (1 + rand() % 5) * 4 + 2 << endl; // 6, 10, 14, 18, 22

}