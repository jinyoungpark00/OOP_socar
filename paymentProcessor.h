#pragma once
#include "car.h"
#include "coupon.h"
#include "insurance.h"

class PaymentProcessor {
public:
	void pay(Car car, Coupon coupon, Insurance insurance);
};