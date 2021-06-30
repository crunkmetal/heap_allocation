#pragma once
#include "Vehicle.h"
class Results : public Vehicle      // syntax to show inheritance (Results class is derived from Vehicle class)
{
public:                             // public access modifier (Class properties are pvt by default)
    void displayResults(Vehicle*);  // pass a pointer to an object as a parameter
};

