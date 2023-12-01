// 2_6_12.cpp : Parking Charges
// Calculates and prints parking charges

#include <iostream>
#include <iomanip>
using namespace std;

const unsigned int maxFee{ 50 }; // maximum parking fee per car
const unsigned int numOfCars = 3; // number of cars

double calculateCharges(double hours); // returns charging amount

struct Car {
	double hours;
	double fee;
} car[numOfCars];

// Calculate and print parking charges
int main()
{
	double totalHours{ 0 };
	double totalCharge{ 0 };

	cout << "Enter number of hours for each car\n";
	for (int i = 0; i < numOfCars; i++)
	{
		cin >> car[i].hours;
		car[i].fee = calculateCharges(car[i].hours);
	}

	for (int i = 0; i < numOfCars; i++)
	{
		totalHours += car[i].hours;
		totalCharge += car[i].fee;
	}

	// Print table
	cout << "\nCar" << setw(10) << "Hours" << setw(12) << "Charge" << endl;
	cout << fixed << right;
	for (int i = 0; i < numOfCars; i++)
	{
		cout << i + 1 << setw(12) << setprecision(1) << car[i].hours
			<< setprecision(2) << setw(12) << car[i].fee << endl;
	}
	cout << "TOTAL" << setw(8) << setprecision(1) << totalHours
		<< setw(12) << setprecision(2) << totalCharge << "\n\n";

}


// compute charges
double calculateCharges(double hours)
{
	double charge{ 20 }; // 0-3 hours

	while (hours > 3)
	{
		charge += 5; // add 5$
		hours--;
	}

	if (charge > maxFee) // exceeds maximum fee
		charge = maxFee;

	return charge;
}