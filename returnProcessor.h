#pragma once

#include "socar_zone.h"
#include "customer.h"

class ReturnProcessor {
public:
	void return_car(SocarZone socarzone, Customer customer);
};