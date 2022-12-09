// S110-Bhamare-English-Distances-App.cpp 
//Author: P.Bhamare
//Goal:

#include <iostream>
#include "EDistance.h"
#include <string>
using namespace std;
int main()
{
	EDistance d1;
	cout << "Feet " << d1.getFeet() << ", Inches " << d1.getInches() << endl;
	d1.setFeet(2);
	d1.setInches(8);
	cout << d1.toString() << endl;

	EDistance d2(3, 7);
	cout << d2.toString() << endl;

	d1.add(d2);
	cout << d1.toString() << endl;
	cout << "D1 in Meters is " << d1.toMeters() << endl;

	EDistance d3(2.0);
	cout << d3.toString() << endl;

}

