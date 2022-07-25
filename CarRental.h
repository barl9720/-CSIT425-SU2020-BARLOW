#include <string>
#include <iostream>

class CarRental {
private:

  int number; // roster in inventory 
  std::string make; // manufacturer
  std::string model; // name of model
  std::string type; // SUV, Hatchback, Truck... etc
  int capacity; // how many people it seats 

public:

  static int objCount;

  CarRental();
  CarRental(int, std::string, std::string, std::string, int);

  void setVehicleParameters(int, std::string, 
  std::string, std::string, int);
  std::string getVehicleInfo();
  
  ~CarRental(); 
};
