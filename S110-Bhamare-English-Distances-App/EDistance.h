//Dual compilation unit style
#pragma once
#include <string>
#include <sstream>
using namespace std;

class EDistance
{
private:
	//data members 
	int feet;
	int inches;

public:
	//mutators
	void setFeet(int fValue);
	void setInches(int iValue);
	//accoessors 
	int getFeet();
	int getInches();
	//constructors
    EDistance();
	EDistance(int fvalue, int iValue);
	EDistance(double m);
	//userdefined methods
	string toString();
	void add(EDistance other);                    //Add to me the other distance
	double toMeters();							  //Convert to meters
};
//----------------------------------------------------------------
//Implimentation
//----------------------------------------------------------------
