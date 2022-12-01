#include <iostream>
#include "customer.h"

using namespace std;

void Customer::set_name(string name) {
	cout << "이름을 입력하세요" << endl;
	Customer::name = name;
}

void Customer::get_name() {
	cout << Customer::name << endl;
}