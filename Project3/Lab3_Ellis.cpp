#include <iostream>
#include <cmath>
using namespace std;
#include <cstdio>
/*
	Lab3_Ellis.cpp
	Elijah Ellis
	2026-02-08
	A menu-driven program to calculate areas of rectangles and circles.
*/
int main() {
	double width;
	double height;
	double Perimeter;
	float radius;
	float area;

	int input = 0;

	cout << "Please enter a number from 1 to 3: ";
	cin >> input;

	if (input == 1)
	{
		cout << "Enter width: ";
		cin >> width;

		cout << "Enter height: ";
		cin >> height;

		Perimeter = width * height;

		cout << "The area of the rectangle is: "<< Perimeter ;
	}

	else if (input == 2)
	{
		cout << "Enter radius: ";
		cin >> radius;

		double pi = 2 * acos(0.0);
		area = pi * radius * radius;
		
		cout << "The area of the circle is " << area;
	}

	else
	{
		cout << "Goodbye!";
	}
}