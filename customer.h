#pragma once

#include <string>
#include "rentalstate.h"

class Customer {
protected:
	std::string name;
	RentalState rentalstate;
	bool containingCoupons;

	void set_name(std::string name);
	void get_name();
};