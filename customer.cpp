#include <iostream>
#include "customer.h"

using namespace std;

void Customer::set_name(string name) {
	cout << "�̸��� �Է��ϼ���" << endl;
	Customer::name = name;
}

void Customer::get_name() {
	cout << Customer::name << endl;
}