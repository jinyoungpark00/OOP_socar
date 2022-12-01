#pragma once

#include <time.h>
#include "socar_zone.h"

class RentalState {
public:
	SocarZone socar_zone;
	bool state;
	time_t startTime;
	time_t endTime;

	RentalState(SocarZone socar_zone, time_t startTime, time_t endTime);
	~RentalState();

	bool completePayment();
	bool completeRecivingCar();
	bool completeReturnCar();
	void printState();
};
