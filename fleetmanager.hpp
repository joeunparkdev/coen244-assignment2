////JOEUN PARK 40066406, JONAH DORANT 21313339 section W
/*
h) Define a class  FleetManager with the following data members,
A variable carfleet_size that specifies the number of cars in the fleet. 
A variable truckfleet_size that specifies the number of trucks in the fleet.
Collection of cars in the fleet, may be an array of car objects. 
Collections of trucks in the fleet, may be an array of truck objects.
Collection of customers, may be an array of customer objects. 
Collection of vehicle rental contracts, may be an array of CarRentalContract objects. 

At least the following additional member functions should be provided,

A member function that processes a reservation request received as a parameter. If reservation is successfuI it should return reservation request
  number otherwise zero. The reserved vehicle should have equal or the closest capacity larger than the requested capacity. If reservation is
  successful a car rental object should be created and stored in the array of CarRentalContract.

A member function that receives a reservation request number as a parameter and outputs the details of the related car rental contract object.
- 	A member function that receives a reservation request number and current date as parameters and cancels reservation request.
- 	A member function that processes the returned vehicles which has the request reservation number and new milage of the vehicle as parameters. 

i)  A main function that creates customer objects and reservation requests objects. It calls to the FleetManager  member functions to process all rental tasks.

*/
#include <vector>
#include "car.hpp"
#include "truck.hpp"
#include <iostream>
#include "VehicleRentalContract.hpp"

class FleetManager {
private: 
	int carfleet_size;
	int truckfleet_size;
	std::vector<Car*> cars_fleet;
	std::vector<Truck*> trucks_fleet;
	std::vector<Customer*> customers;
	std::vector<VehicleRentalContract*> contracts;
public:
	int processReservation(ReservationRequest request);
	void reservationDetails(ReservationRequest details);
	void cancelReservation(int reservationRequestNumber, Date date);
	void returnVehicle(int reservationNumber, int addedMileage);
};
