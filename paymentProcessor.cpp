#include <iostream>
#include "paymentProcessor.h"

using namespace std;

void pay(Car car, Coupon coupon, Insurance insurance) {
	cout << "����" << car.id << " �� ������ �Ϸ�Ǿ����ϴ�. (" << coupon.name << insurance.name << " ���)." << endl;
}