#include <iostream>
#include "CarRental.h"

  void menu() {
  std::cout << "*************************************************************\n";
  std::cout << "** Welcome to Car Rental Service. Please make a selection: **\n";
  std::cout << "** 1.) Display all available inventory.                    **\n";
  std::cout << "** 2.) Search for a vehicle by capacity.                   **\n";
  std::cout << "** 3.) Exit program.                                       **\n";
  std::cout << "*************************************************************\n";
}

int main(){

    CarRental myVehicle1(1, "Ford", "F-150", "Truck", 5);
    CarRental myVehicle2(2, "Toyota", "Prius", "Hatchback", 5);
    CarRental myVehicle3(3, "Chevrolet", "Corvette", "Coupé", 2);
    CarRental myVehicle4(4, "Chrysler", "Town & Country", "Minivan", 7);
    CarRental myVehicle5(5, "Honda", "Civic", "Sedan", 5);
    CarRental myVehicle6(6, "Nissan", "Rogue", "SUV", 5);
    
    //std::cout << myVehicle1.getVehicleInfo();

  int choice;
  do {
    menu();
    std::cout << "Enter your choice: \n";
    std::cin >> choice;
    std::cin.ignore(1000, '\n');
    switch(choice) {
      case 1:  {
        std::cout << myVehicle1.getVehicleInfo();
        std::cout << myVehicle2.getVehicleInfo();
        std::cout << myVehicle3.getVehicleInfo();
        std::cout << myVehicle4.getVehicleInfo();
        std::cout << myVehicle5.getVehicleInfo();
        std::cout << myVehicle6.getVehicleInfo();
        std::cout << "\n";
        break;
      }
      case 2: {
        int desiredCapacity;
        std::cout << "Please input desired capacity: \n";
        std::cin >> desiredCapacity;
        switch(desiredCapacity) {
          case 2: {
            std::cout << myVehicle3.getVehicleInfo();
            std::cout << "\n";

            break;
          }
          case 5: {
            std::cout << myVehicle1.getVehicleInfo();
            std::cout << myVehicle2.getVehicleInfo();
            std::cout << myVehicle5.getVehicleInfo();
            std::cout << myVehicle6.getVehicleInfo();
            std::cout << "\n";
            break;
          }
          case 7: {
            std::cout << myVehicle4.getVehicleInfo();
            std::cout << "\n";
            break;
          }
          default: {
            std::cout << "No vehicles of that capacity in stock, choose to view inventory and try again.\n";
          }
        }
      }
      case 3: {
        break;
      }
      default: {
        std::cout << "Invalid choice. Choose between 1 and 3.\n";
      }
    }
    std::cout << "\n";
  }
  while (choice !=3);{
    return 0;
  }
}