// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

int main()
{
	double radius;
	double area;
	// Step 1: Set the radius
	radius = 20;
	// Step 2: Compute area
	area = radius * radius * 3.14159;
	// Step 3: Display the area
	cout << "The area is" << area << endl;
    return 0;
}

