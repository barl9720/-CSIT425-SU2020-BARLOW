#include <iostream>
#include <string>
#include "CarRental.h"
using namespace std;

int CarRental::objCount = 0;

CarRental::CarRental(): number(0), make(""),model(""),type(""),capacity(0) {}
CarRental::CarRental(int n, string mak, string mod, string type, int c): number(n), make(mak), model(mod), type(type), capacity(c) {}
//CarRental::CarRental(int n, string mak, string mod, string type, int c): number(n), make(mak), model(mod), type(type), capacity(c) {}


void CarRental::setVehicleParameters(int n, string mak, string mod, string type, int c){
	number =n;
    make = mak;
	model = mod;
    type = type;
	capacity = c;
}

std::string CarRental::getVehicleInfo(){

	std::string temp;
	temp = "\n" + std::to_string(number) + ": " + make + " " + model + " " + type + " " + std::to_string(capacity);
  return temp;
}

CarRental::~CarRental(){
	std::cout << "\nobject deleted...";
}

