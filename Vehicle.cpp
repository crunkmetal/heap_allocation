#include "Vehicle.h"						// function prototype info for this file
#include <string>							// using string
#include <iostream>							// for console input/output ops

using namespace std;						// using standard namespace
// function to get private property value
string Vehicle::getOwner()
{
	return owner;
}
// function to set a pvt prop value, using user input
void Vehicle::setOwner()
{
	string ownerName;
	cout << "  What is your name?\t\t\t\t";
	getline(cin, ownerName);
	owner = ownerName;
}
// function to get private property value
string Vehicle::getVehicleMake()
{
	return vehicleMake;
}
// function to set a pvt prop value, using user input
void Vehicle::setVehicleMake()
{
	string make;
	cout << "  Vehicle Make(example: Ford)\t\t\t";
	getline(cin, make);
	vehicleMake = make;
}
// function to get private property value
string Vehicle::getVehicleModel()
{
	return vehicleModel;
}
// function to set a pvt prop value, using user input
void Vehicle::setVehicleModel()
{
	string model;
	cout << "  Vehicle Model(example: F150)\t\t\t";
	getline(cin, model);
	vehicleModel = model;
}
// function to get private property value
int Vehicle::getNumCyl()
{
	return numCyl;
}
// function to set a pvt prop value, using user input
void Vehicle::setNumCyl()
{
	int nCylinders;
	cout << "  How many cylinders in vehicle?\t\t";
	cin >> nCylinders;
	numCyl = nCylinders;
}
// function to get private property value
float Vehicle::getOdometerStart()
{
	return odometerStart;
}
// function to set a pvt prop value, using user input
void Vehicle::setOdometerStart()
{
	float odoStart;
	cout << "  What is the starting odometer reading?\t";
	cin >> odoStart;
	odometerStart = odoStart;
}
// function to get private property value
float Vehicle::getOdometerEnd()
{
	return odometerEnd;
}
// function to set a pvt prop value, using user input
void Vehicle::setOdometerEnd()
{
	float odoEnd;
	cout << "  What is the ending odometer reading?\t\t";
	cin >> odoEnd;
	// if ending mileage is greater than starting mileage do this...
	if (odoEnd > getOdometerStart())
	{
		odometerEnd = odoEnd;	// assign value of user input to pvt prop member
	}
	else						// if ending mileage is less than starting mileage...
	{
		cout << "Mileage entered is incorrect, try again.\n\n";
		system("pause");
		setOdometerEnd();		// re-invoke this member function
	}
}
// function to get private property value
double Vehicle::getGasAdded()
{
	return gasAdded;
}
// function to set a pvt prop value, using user input
void Vehicle::setGasAdded()
{
	double addedGas;
	cout << "  How many gallons of gas were added to tank?\t";
	cin >> addedGas;
	gasAdded = addedGas;
}
// function to get private property value
float Vehicle::getMilesPerGallon()
{
	return milesPerGallon;
}
// function to calculate mpg and assign this value to pvt prop member
void Vehicle::setMilesPerGallon(float* p_odoEnd, float* p_odoStart, double* p_gasAdded)
{
	float y;					// declare a float
	y = (float)(*p_gasAdded);	// implicit conversion - implicit cast double to float 
	milesPerGallon = ((*p_odoEnd) - (*p_odoStart)) / y;	// calculation to determine mpg

	// below info for clarification (which vars to use for calculation)
	// float = (float - float)/double
	// milesPerGallon = (getOdometerEnd() - getOdometerStart()) / getGasAdded();
}

