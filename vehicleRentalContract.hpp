//JOEUN PARK 40066406, JONAH DORANT 21313339 section W
#ifndef VEHICLERENTALCONTRACT_HPP
#define VEHICLERENTALCONTRACT_HPP

#include <iostream>
/*
//JOEUN PARK 40066406, JONAH DORANT 21313339 section W
Define a class VehicleRentalContract with the following data members: 
A reservation request object from (e).
A pointer to the reserved Car object. If reserved vehicle is not a car, then this pointer should be set to a nullpointer.
A pointer to the reserved Truck object. If reserved vehicle is not a truck, then this pointer should be set to a nullpointer.
A pointer to CashPayment from (f). If payment mode isnot cash, then this pointer should be set to a nullpointer.
A pointer to CreditCardPayment from (f). If payment mode is not by credit card, then this pointer should be set to a nullpointer.
A Boolean variable that is set to true when the customer picks up the vehicle and sets to false when it returns.
*/

#include "reservationRequest.hpp"
#include "car.hpp"
#include "truck.hpp"
#include "cashpayment.hpp"
#include "creditCardPayment.hpp"


class VehicleRentalContract{

    private:
    ReservationRequest *reservationRequest;
    Vehicle* vehicle;
    Payment *payment;
    bool pickedVehicle;

    public:
    VehicleRentalContract(ReservationRequest *m, Vehicle *vehicle, Payment *payment, bool isPicked);

    ~VehicleRentalContract();

    Vehicle getVehicle();

    bool isVehiclePicked();
    void print();

};


#endif // VEHICLERENTALCONTRACT_HPP
