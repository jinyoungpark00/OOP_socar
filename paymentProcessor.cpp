#include <iostream>
#include "paymentProcessor.h"

using namespace std;

void pay(Car car, Coupon coupon, Insurance insurance) {
	cout << "차량" << car.id << " 의 결제가 완료되었습니다. (" << coupon.name << insurance.name << " 사용)." << endl;
}