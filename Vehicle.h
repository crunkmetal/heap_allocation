#pragma once
#include <string>
using namespace std;
// header file houses function prototypes
class Vehicle
{
public:					// public access modifier.  Class properties are private by default.
	string getOwner();
	void setOwner();

	string getVehicleMake();
	void setVehicleMake();

	string getVehicleModel();
	void setVehicleModel();

	int getNumCyl();
	void setNumCyl();

	float getOdometerStart();
	void setOdometerStart();

	float getOdometerEnd();
	void setOdometerEnd();

	double getGasAdded();
	void setGasAdded();

	float getMilesPerGallon();
	void setMilesPerGallon(float*, float*, double*);	

	// constructors
	// default constructor (mandatory, if other constructors are created)
	Vehicle(){};
	// constructor for instantiating objects that have pointers to objects as arguments
	// This constructor is not used...
	Vehicle(Vehicle* O) 
	{
		// using '->' arrow operator to use object member function...
		// and assign that value to private member properties
		owner = O->getOwner();					
		vehicleMake = O->getVehicleMake();
		vehicleModel = O->getVehicleModel();
		numCyl = O->getNumCyl();
		odometerStart = O->getOdometerStart();
		odometerEnd = O->getOdometerEnd();
		gasAdded = O->getGasAdded();
	};
	// constructor for new objects that take parameters
	Vehicle(string o, string vmak, string vmod, int cyl, float odo1, float odo2, double gas)
	{
		// assigning argument values to private member properties
		owner = o;
		vehicleMake = vmak;
		vehicleModel = vmod;
		numCyl = cyl;
		odometerStart = odo1;
		odometerEnd = odo2;
		gasAdded = gas;
		milesPerGallon = (odo2 - odo1) / gas;
	};

private:
	string owner;
	string vehicleMake;
	string vehicleModel;
	int numCyl;
	float odometerStart;
	float odometerEnd;
	double gasAdded;
	float milesPerGallon;	
};

