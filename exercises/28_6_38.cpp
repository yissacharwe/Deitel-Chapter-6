// 28_6_38.cpp : Tower of Hanoi
#include <iostream>
using namespace std;

// solve the tower of hanoi problem
void moveDisks(int numOfDisks, int src, int aux, int dest);

// iterative solution
//void moveDisksIterative(int numOfDisks, int src, int aux, int dest);


int main()
{
	for (int i{ 0 }; i < 7; i++)
	{
		cout << i + 1 << ":\n";
		moveDisks(i + 1, 1, 2, 3);
		cout << "\n";
	}
	
	//moveDisksIterative(1, 1, 2, 3);
}

/* 
* print the precise sequence of transfers to complete the tower of hanoi
* 
* @param numOfDisks  number of disks to be moved
* @param peg1        source peg
* @param peg2        auxiliary peg
* @param peg3        destination peg
*
*/
void moveDisks(int numOfDisks, int peg1, int peg2, int peg3)
{
	if (numOfDisks == 1)
	{
		cout << peg1 << " -> " << peg3 << endl; // last disk 
		return;
	}
	else
	{
		// move n-1 disks from peg 1 to peg 2, using peg 3 as auxiliary
		moveDisks(numOfDisks-1, peg1, peg3, peg2);
		// move the last disk from peg 1 to peg 3
		cout << peg1 << " -> " << peg3 << endl;
		// move the n-1 disks from peg 2 to peg 3, using peg 1 as auxiliary
		moveDisks(numOfDisks-1, peg2, peg1, peg3);
	}
}

/*
* iterative solution
* print the precise sequence of transfers to complete the tower of hanoi
*
* @param numOfDisks  number of disks to be moved
* @param peg1        source peg
* @param peg2        auxiliary peg
* @param peg3        destination peg
*
*/
//void moveDisksIterative(int numOfDisks)
//{
//	int peg1, peg2, peg3;
//	while (numOfDisks > 1)
//	{
//		
//		numOfDisks--;
//	}
//	cout << src << " -> " << dest << endl;
//}