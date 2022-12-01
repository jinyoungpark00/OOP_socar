#include <iostream>
#include "rentalstate.h"

using namespace std;

RentalState::RentalState(SocarZone socar_zone, time_t startTime, time_t endTime) {
	this->socar_zone = socar_zone;
	this->state = state;
	this->startTime = startTime;
	this->endTime = endTime;
}

RentalState::~RentalState() {
	//delete this->socar_zone; 
	this->state = 0;
	this->startTime = 0;
	this->endTime = 0;
}

bool RentalState::completePayment() {
	cout << "������ �Ϸ��߽��ϴ�." << endl;
	return 1;
}

bool RentalState::completeRecivingCar() {
	cout << "���� ������ �ֽ��ϴ�." << endl;
	return 1;
}

bool RentalState::completeReturnCar() {
	cout << "������ �ݳ��߽��ϴ�." << endl;
	return 1;
}

void RentalState::printState() {
	completePayment();
	completeRecivingCar();
	completeReturnCar();
}