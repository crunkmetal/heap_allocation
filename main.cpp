/*
Assignment - Smart Pointers
[] Create a program that:-
    - demos allocation and deallocation of memory to 
    - the using pointers of 4 primitive data types of your choice
    - with the new and delete keywords.
[] Create 5 objects
    - with the new keyword for your example too.
[] Over comment your code.
[] Explain to the user in cout statements:
    - allocation and deallocation of memory with examples.
[] Make a great UX!
*/

#include <iostream>             // for console input/output
#include "Intro.h"              // using (in this file) info from Intro class
#include "Vehicle.h"            // using (in this file) info from Vehicle class
#include "Results.h"            // using (in this file) info from Results class

using namespace std;            // using standard namespace
// the one and only main() function
int main()
{
    // display to console a description of what this program does
    Intro desc;                 // instantiate object of Intro class
    desc.getAppDescription();   // invoke function to display intro
    system("pause");            // WinOS specific cmd to pause app
    system("CLS");              // WinOS specific cmd to clear console
    
    Vehicle Car1;               // instantiating object of Vehicle class
    Vehicle* P_Car1 = &Car1;    // declaring a pointer to created object's address

    Car1.setOwner();            // set/get Owner value
    string* p_owner;            // declaring a string pointer
    p_owner = new string;       // memory alloc assigned to new string ptr
    *p_owner = Car1.getOwner(); // assign value to pointer

    
    Car1.setVehicleMake();      // set/get Vehicle Make value
    string* p_make;             // declaring a string pointer
    p_make = new string;        // memory alloc assigned to new string ptr
    *p_make = Car1.getVehicleMake();    // assign value to pointer

    Car1.setVehicleModel();     // set/get Vehicle Model value
    string* p_model;            // declaring a string pointer
    p_model = new string;       // memory alloc assigned to new string ptr
    *p_model = Car1.getVehicleModel();  // assign value to pointer

    Car1.setNumCyl();           // set/get # of cylinders
    int* p_numCyl;              // declaring an int pointer
    p_numCyl = new int;         // memory alloc assigned to new int ptr
    *p_numCyl = Car1.getNumCyl();   // assign value to pointer

    Car1.setOdometerStart();    // set/get starting Odometer
    float* p_odoStart;          // declaring a float pointer
    p_odoStart = new float;     // memory alloc assigned to new float ptr
    *p_odoStart = Car1.getOdometerStart();  // assign value to pointer

    Car1.setOdometerEnd();      // set/get ending odometer
    float* p_odoEnd;            // declaring a float pointer
    p_odoEnd = new float;       // memory alloc assigned to new float ptr
    *p_odoEnd = Car1.getOdometerEnd();  // assign value to pointer

    Car1.setGasAdded();         // set/get amount of gas added at fuel stop
    double* p_gasAdded;         // declaring a double pointer
    p_gasAdded = new double;    // memory alloc assigned to new double ptr
    *p_gasAdded = Car1.getGasAdded();   // assign value to pointer

    Car1.setMilesPerGallon(p_odoEnd, p_odoStart, p_gasAdded);   // invoke function to determine mpg, based on user input(parameters)
    double* p_mpg;              // declaring a double pointer
    p_mpg = new double;         // memory alloc assigned to new double ptr
    *p_mpg = Car1.getMilesPerGallon();  // assign value to pointer


    // Disclaimer
    system("CLS");
    cout << "\n  The following is displayed to show allocation of heap memory...\n\n";


    // Display to console - memory allocated using NEW keyword
    cout << "\n ** Harry Renquist's Vehicle class object instantiated with arguments.\n";
    cout << "  ** HEAP - Memory allocated using NEW keyword.\n\n";
    // create an instance of an object with 'new'
    Vehicle Car2;           // instantiate an object of Vehicle class
    Vehicle* P_Car2;        // initializing a pointer
    // memory allocated to heap [new], assigning pointer to new object (w/ arguments)
    P_Car2 = new Vehicle("Harry Renquist", "BMW", "M5", 10, 14082.0f, 14342.0f, 14.386);
    
    // Display to console - memory allocated using NEW keyword
    cout << "\n ** Johnny Cash's Vehicle class object instantiated with arguments.\n";
    cout << "  ** HEAP - Memory allocated using NEW keyword.\n\n";
    // create an instance of an object with 'new'
    Vehicle Car3;           // instantiate an object of Vehicle class
    Vehicle* P_Car3;        // initializing a pointer
    // memory allocated to heap [new], assigning pointer to new object (w/ arguments)
    P_Car3 = new Vehicle("Johnny Cash", "Cadillac", "DeVille", 8, 2132.0f, 2242.0f, 7.5);

    // Display to console - memory allocated using NEW keyword
    cout << "\n ** Bill Burr's Vehicle class object instantiated with arguments.\n";
    cout << "  ** HEAP - Memory allocated using NEW keyword.\n\n";
    // create an instance of an object with 'new'
    Vehicle Car4;           // instantiate an object of Vehicle class
    Vehicle* P_Car4;        // initializing a pointer
    // memory allocated to heap [new], assigning pointer to new object (w/ arguments)
    P_Car4 = new Vehicle("Bill Burr", "Porsche", "Cayenne", 10, 13066.08f, 13466.3f, 17.6);

    // Display to console - memory allocated using NEW keyword
    cout << "\n ** Jody Summers's Vehicle class object instantiated with arguments.\n";
    cout << "  ** HEAP - Memory allocated using NEW keyword.\n\n";
    // create an instance of an object with 'new'
    Vehicle Car5;           // instantiate an object of Vehicle class
    Vehicle* P_Car5;        // initializing a pointer
    // memory allocated to heap [new], assigning pointer to new object (w/ arguments)
    P_Car5 = new Vehicle("Jody Summers", "Chrysler", "Sebring", 6, 210082.4f, 210282.0f, 12.2);

    // Display to console - memory allocated using NEW keyword
    cout << "\n ** Eazy E's Vehicle class object instantiated with arguments.\n";
    cout << "  ** HEAP - Memory allocated using NEW keyword.\n\n";
    // create an instance of an object with 'new'
    Vehicle Car6;           // instantiate an object of Vehicle class
    Vehicle* P_Car6;        // initializing a pointer
    // memory allocated to heap [new], assigning pointer to new object (w/ arguments)
    P_Car6 = new Vehicle("Eazy E", "six", "fo", 8, 198324.6f, 198598.2f, 13.9);

    
    // pause after collecting data
    cout << "\n\n";
    system("pause >nul | echo. View Records...");	// system pause w/ custom msg (WinOS specific)
    system("CLS");

    Results show;                                   // instantiating object to show results
    show.displayResults(P_Car1);                    // invoke function to display object attributes
    system("pause >nul | echo. Next Record...");	// system pause w/ custom msg (WinOS specific)
    cout << "\n";
    show.displayResults(P_Car2);                    // invoke function to display object attributes
    system("pause >nul | echo. Next Record...");	// system pause w/ custom msg (WinOS specific)
    cout << "\n";
    show.displayResults(P_Car3);                    // invoke function to display object attributes
    system("pause >nul | echo. Next Record...");	// system pause w/ custom msg (WinOS specific)
    cout << "\n";
    show.displayResults(P_Car4);                    // invoke function to display object attributes
    system("pause >nul | echo. Next Record...");	// system pause w/ custom msg (WinOS specific)
    cout << "\n";
    show.displayResults(P_Car5);                    // invoke function to display object attributes
    system("pause >nul | echo. Next Record...");	// system pause w/ custom msg (WinOS specific)
    cout << "\n";
    show.displayResults(P_Car6);                    // invoke function to display object attributes
    system("pause >nul | echo. Thanks for playing...");	// system pause w/ custom msg (WinOS specific)
    cout << "\n";

    system("CLS");
    // Display to console - memory deallocated from using NEW keyword
    cout << "\n\n ** Deallocating memory acquired from using NEW keyword.\n";
    system("pause >nul | echo.  Press any key to deallocate memory...");	// system pause w/ custom msg (WinOS specific)

    // deallocating HEAP memory using keyword 'delete'
    delete p_owner, p_make, p_model, p_numCyl, p_odoStart, p_odoEnd;
    delete p_gasAdded, p_mpg, P_Car2, P_Car3, P_Car4, P_Car5, P_Car6;

    // Display to console - memory deallocated from using NEW keyword
    cout << "\n\n ** Heap memory deallocated using 'delete' keyword.\n";
    system("pause >nul | echo.  Press any key to exit program...");	// system pause w/ custom msg (WinOS specific)
    cout << "\n\n";

	return 0;   // main() function returns 0
}

