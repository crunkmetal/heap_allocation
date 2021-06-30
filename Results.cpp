#include "Results.h"	// use this header file for this cpp file
#include <iostream>		// for console input/output

using namespace std;	// using standard namespace
// function that takes a pointer to an object as an argument
void Results::displayResults(Vehicle* O)
{
	system("CLS");
	// Display to console
	cout << "\nVehicle Info: \n";
	cout << "  " << "Owner:\t\t\t" << O->getOwner() << "\n";				// using '->' (arrow operator) to access (parameter) object's properties
	cout << "  " << "Vehicle Make:\t\t\t" << O->getVehicleMake() << "\n";
	cout << "  " << "Vehicle Model:\t\t" << O->getVehicleModel() << "\n";
	cout << "  " << "Number of cylinders:\t\t" << O->getNumCyl() << "\n";
	cout << "  " << "Starting Odometer:\t\t" << O->getOdometerStart() << "\n";
	cout << "  " << "Ending Odometer:\t\t" << O->getOdometerEnd() << "\n";
	cout << "  " << "Gallons of gas added:\t\t" << O->getGasAdded() << "\n\n";
	cout << "  " << O->getOwner() << ":\n  Based on your input, your " << O->getNumCyl() << " cylinder " << O->getVehicleMake() << " " << O->getVehicleModel() << "\n   gets " << O->getMilesPerGallon() << " mpg!\n\n";
}
