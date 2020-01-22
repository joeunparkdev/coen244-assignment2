#include <iostream>
// COEN 244 Assignment 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
////JOEUN PARK 40066406, JONAH DORANT 21313339 section W

#include "customer.hpp"
#include "date.hpp"
#include "payment.hpp"
#include "cashpayment.hpp"
#include "creditCardPayment.hpp"
#include "reservationRequest.hpp"
#include "vehicle.hpp"
#include "car.hpp"
#include "truck.hpp"
#include "fleetmanager.hpp"

using namespace std;

int main()
{
	Car *v1;
	v1 = new Car;
	//v1->printCapacity();
	//v1->setCapacity(5);
	//v1->printCapacity();
	//v1->setCapacity(10);
	//v1->printCapacity();
	cout << v1->getAvailability(4, 4);
	v1->availability_function();
	cout << v1->getAvailability(4,4);

	v1->availability_function();





	//////////////////////////////////////////////////////////////////Testing Customer and Date classes////////////////////////////////////
	Customer *c1;
	Date *d1;
	d1 = new Date(11, 11, 1111);
	c1 = new Customer("Jonah","def 456",*d1);
	c1->printCustomer();
	c1->setName("dorant");
	c1->setDriving_License("ghi 789");
	c1->setBirthday(*d1);
	c1->printCustomer();
	///////////////////////////////////////////////////////////////////Testing Payment class//////////////////////////////////////////////
	Payment *p1;
	p1 = new Payment();
	p1->paymentDetails();
	p1->setPayment(1989.01);
	p1->paymentDetails();
	//////////////////////////////////////////////////////////////////Testing CashPayment class//////////////////////////////////////////
	CashPayment *f1;
	f1 = new CashPayment(1337.135);
	f1->paymentDetails();
	f1->setPayment(1111.2222);
	f1->paymentDetails();
	////////////////////////////////////////////////////////////////Testing CreditCardPayment class/////////////////////////////////////
	CreditCardPayment *cc1;
	cc1 = new CreditCardPayment(43110);
	cc1->paymentDetails();
	cc1->setCard_Name("Jonah");
	cc1->setCard_Number(21313339);
	cc1->setCard_Expiration("2000,01,01");
	cc1->setPayment(3333.4444);
	cc1->paymentDetails();
	////////////////////////////////////////////////////////////////Testing ReservationRequest class////////////////////////////////////////
	ReservationRequest *r1;
	r1 = new ReservationRequest();
	Date *d2;
	d2 = new Date(01, 21, 1989);
	r1->setCustomer("Jaden","tin 420", *d2);
	r1->printCustomer();

	FleetManager * f = new FleetManager();
	f->processReservation(*r1);
	f->reservationDetails(*r1);
	f->returnVehicle(r1->getReservation_Number(), 10);

	return 0;
}
