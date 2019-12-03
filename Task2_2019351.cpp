// Task2_2019351.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int pow(int b, int e);
int b;
int e;
int pow(int b, int e)
{
	if (e > 0)
		return b * pow(b,e-1);
	else
		return 1;
	
	pow(b,e);
	
}


int main()
{
	cout << "enter base of: ";
	cin >> b;
	cout << "enter exponent: ";
	cin >> e;
	cout << b << "^" << e << " = "<<pow(b,e);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
