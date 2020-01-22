////JOEUN PARK 40066406, JONAH DORANT 21313339 section W
#include <iostream>
#include "vehicleRentalContract.hpp"

using namespace std;

VehicleRentalContract::VehicleRentalContract(
  ReservationRequest *r,
  Vehicle* vehicle,
  Payment *payment,
  bool isPicked){
  this->reservationRequest = r;
  this->vehicle = vehicle;
  this->payment = payment;
  this->pickedVehicle = isPicked;
}

VehicleRentalContract::~VehicleRentalContract(){
}

bool VehicleRentalContract::isVehiclePicked(){
  return this->pickedVehicle;
}

void VehicleRentalContract::print(){
  cout << "VehicleRentalContract: " << endl;
  cout << "--IsPicked: " << this->pickedVehicle;
  cout << "--ReservationRequest: " << endl;
  this->reservationRequest->print();
  cout << "--Payment: " << endl;
  this->payment->print();
  cout << "--Vehicle: " << endl;
  this->vehicle->print();
  cout << "--End VehicleRentalContract.print() " << endl;
}
