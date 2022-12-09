#include "EDistance.h"

//mutators 
void EDistance::setFeet(int fvalue) {
	feet = abs(fvalue);
}
void EDistance::setInches(int ivalue) {
	inches = abs(ivalue);
	feet += ivalue / 12;
	inches = ivalue % 12;
}
//Accessors 
int EDistance::getFeet() {
	return feet;
}
int EDistance::getInches() {
	return inches;
}
//Constructors
EDistance::EDistance() {								//Zero-Arguments constructor
	setFeet(0);
	setInches(0);
}
EDistance::EDistance (int fvalue , int ivalue) {	    //All-Argument constructor
	setFeet(fvalue);
	setInches(ivalue);
}
EDistance::EDistance(double m) {
	double cm = m * 100;
	double totalInches = cm / 2.54;
	setFeet(0);
	setInches(totalInches);

}

//User Defined methods
string EDistance::toString() {
	ostringstream sout;
	sout << this << " EDistance [ Feet: " << getFeet() << ", Inches: " << getInches() << " ]";
	return sout.str();
}
double EDistance::toMeters() {
	int totalInches = ((getFeet() * 12) + getInches());
	double cm = totalInches * 2.54;
	return cm / 100;
}
void EDistance::add(EDistance other) {
	feet += other.getFeet();
	setInches(this -> inches + other.getInches());
		
}


