#pragma once

#include "socar_zone.h"
#include "customer.h"

class PickingProcessor {
public:
	void rent_car(SocarZone socar_zone, Customer customer);
};
