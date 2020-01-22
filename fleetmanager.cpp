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

A member function that processes a reservation request received as a
  parameter. If reservation is successfuI it should return reservation
  request number otherwise zero. The reserved vehicle should have equal
  or the closest capacity larger than the requested capacity. If
  reservation is successful a car rental object should be created
  and stored in the array of CarRentalContract.

A member function that receives a reservation request
  number as a parameter and outputs the details of the related
  car rental contract object.

- 	A member function that receives a reservation request number
  and current date as parameters and cancels reservation request.

- 	A member function that processes the returned vehicles which
  has the request reservation number and new milage of the vehicle
  as parameters. 

i)  A main function that creates customer objects and reservation requests objects. It calls to the FleetManager  member functions to process all rental tasks.

*/

/*
class FleetManager {
private: 
	int carfleet_size;
	int truckfleet_size;
	std::vector<Car*> cars_fleet;
	std::vector<Truck*> trucks_fleet;
	std::vector<Customer*> customers;
	std::vector<VehicleRentalContract*> contracts;
public:
	processReservation(ReservationRequest request);
	reservationDetails(ReservationRequest details);
	cancelReservation(int reservationRequestNumber, Date date);
	returnVehicle(int reservationNumber, int addedMileage);
	*/


int FleetManager::findVehicle(std::vector<Vehicle *> vehicles,
	ReservationRequest request) {
	int i = 0;
	for (i = 0; i < vehicles.size(); i++) {
		if (vehicles[i]->getAvailability(request.getRental_Start(),
			request.getRental_End() )){
			break;
		} else {
			continue;
		}
	}

	if (i < vehicles.size()) {
		// we found vehicle i
		Payment payment;
		VehicleRentalContract* newVehicleRentalContract =
	    	new VehicleRentalContract(
	    		request, vehicles[i], payment, true
	 		);
	 	vehicles[i]->setAvailability(
				request->getRental_Start(),
				request->getRental_End(), false);
		this->contracts.push_back(newVehicleRentalContract);
		return request.getRequest_Number();
	} else {
		// we failed to find a vehicle.
		return 0;
	}
}

int FleetManager::processReservation(ReservationRequest request){
	if (request.getVehicle_Type() == "car") {
		return findVehicle(this->cars_fleet, request);
	} else if (request.getVehicle_Type() == "car") {
		return findVehicle(this->trucks_fleet, request);
	}
}

void FleetManager::reservationDetails(ReservationRequest details){
	for (int i = 0; i < this->contracts.size(); i++) {
		if (this->contracts[i]->getReservationRequest()->getRequest_Number()
			== details.getRequest_Number()) {
			this->contracts[i]->print();
			break;
		}
	}
	return;
}

void FleetManager::cancelReservation(int reservationRequestNumber, Date date){
	for (int i = 0; i < this->contracts.size(); i++) {
		if (this->contracts[i]->getReservationRequest()->getRequest_Number()
			== reservationRequestNumber) {
			ReservationRequests * request =
				this->contracts[i]->getReservationRequest()
			this->contracts[i]->vehicle->setAvailability(
				request->getRental_Start(),
				request->getRental_End(), true);
			this->contracts.erase(this->contracts.begin()+i);
			break;
		}
	}
}

void FleetManager::returnVehicle(int reservationNumber, int addedMileage) {
	for (int i = 0; i < this->contracts.size(); i++) {
		if (this->contracts[i]->getReservationRequest()->getRequest_Number()
			== reservationNumber) {
			ReservationRequest* request =
				this->contracts[i]->getReservationRequest();
			Vehicle* vehicle = this->contracts[i]->getVehicle();
			vehicle->setAvailability(
				request->getRental_Start(),
				request->getRental_End(), true);
			vehicle->setMileage(vehicle->getMileage() + addedMileage);
			return;
		}
	}
}
