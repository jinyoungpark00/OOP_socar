#pragma once

#include <string>
#include "car.h"

class SocarZone {
public:
	Car car;
	std::string name;
	std::string location;
	bool availableCar;

	void modifyingCar(Car car);
};