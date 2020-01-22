//JOEUN PARK 40066406, JONAH DORANT 21313339 section W
#include <iostream>
#include "reservationRequest.hpp"
#include "customer.hpp"
#include <string>

using namespace std;

ReservationRequest::ReservationRequest()
{
	vehicle_type = "Unknown";
	reservation_counter = 0;
	request_number = 0;
	vehicle_limit = 0;
}

ReservationRequest::~ReservationRequest()
{
	std::cout << "Destructing reservation request" << std::endl;

}
/////////////////////////////////////////////////////////////////////Set Functions/////////////////////////////////////////////////////////////////////////
void ReservationRequest::setCustomer(std::string n, std::string l, Date d)
{
	customer.setName(n);
	customer.setDriving_License(l);
	customer.setBirthday(d);
}
void ReservationRequest::setVehicle_Type(std::string t)
{
	vehicle_type = t;
}
void ReservationRequest::setReservation_Counter(int c)
{
	reservation_counter = c;
}
void ReservationRequest::setRequest_Number(int) 
{
	request_number = reservation_counter;
}
void ReservationRequest::setReservation_Date(Date date)
{
	reservation_date = date;
}
void ReservationRequest::setRental_Start(Date date)
{
	rental_start = date;
}
void ReservationRequest::setRental_End(Date date)
{
	rental_end = date;
}
void ReservationRequest::setVehicle_Limit(int l)
{
	vehicle_limit = l;
}
///////////////////////////////////////////////////////////////////////Get Functions/////////////////////////////////////////////////////////////////

Customer ReservationRequest::getCustomer()
{
	return customer;
}
std::string ReservationRequest::getVehicle_Type()
{
	return vehicle_type;
}
int ReservationRequest::getReservation_Counter()
{
	return reservation_counter;
}
int ReservationRequest::getRequest_Number()
{
	return request_number;
}
Date ReservationRequest::setReservation_Date()
{
	return reservation_date;
}
Date ReservationRequest::getRental_Start()
{
	return rental_start;
}
Date ReservationRequest::getRental_End()
{
	return rental_end;
}
int ReservationRequest::getVehicle_Limit()
{
	return vehicle_limit;
}


/////////////////////////////////////////////////////////////////Print Functions///////////////////////////////////////////////////////////////////////
void ReservationRequest::printCustomer()
{
	customer.printCustomer();
}

void ReservationRequest::printReservation_Request()
{
	customer.printCustomer();
	cout << "Vehicle type: " << vehicle_type << endl;
	cout << "Reservation Number: " << reservation_counter << endl;
	cout << "Request Number " << request_number << endl; 
	cout << "Vehicle limit: " << vehicle_limit << endl;
	cout << "Reservation Date: ";
	reservation_date.printDate();
	cout << "Start Date: ";
	rental_start.printDate();
	cout << "End Date: ";
	rental_end.printDate();
}
