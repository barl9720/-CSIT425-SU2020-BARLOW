#include <iostream>
#include "vehicleType.h"
int main(){
    
    vehicleType myVehicle1(1, "Ford", "F-150", "Truck", 5);
    vehicleType myVehicle2(2, "Toyota", "Prius", "Hatchback", 5);
    vehicleType myVehicle3(3, "Chevrolet", "Corvette", "Coupé", 2);
    vehicleType myVehicle4(4, "Chrysler", "Town & Country", "Minivan", 7);
    vehicleType myVehicle5(5, "Honda", "Civic", "Sedan", 5);
    vehicleType myVehicle6(6, "Nissan", "Rogue", "SUV", 5);
    
    // std::cout << myVehicle.getVehicleInfo();
    return 0;
}