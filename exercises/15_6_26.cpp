// 16_6_25.cpp : Calculating Number of Seconds

#include <iostream>
using namespace std;

int timePassedInSeconds(int hours, int minutes, int seconds);

int main()
{
	// time passed between 5:30:00 to 5:30:29
	cout << timePassedInSeconds(10, 0, 0) - timePassedInSeconds(9, 40, 0);
}

// return number of seconds passed since 12:00
int timePassedInSeconds(int hours, int minutes, int seconds)
{
	int timePassed{ hours * 3600 + minutes * 60 + seconds };
	return timePassed;
}