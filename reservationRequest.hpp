////JOEUN PARK 40066406, JONAH DORANT 21313339 section W
#ifndef RESERVATION_REQUEST_HPP
#define RESERVATION_REQUEST_HPP

#include "customer.hpp"


class ReservationRequest
{
	private:
		Customer customer;
		std::string vehicle_type;
		int reservation_counter;
		int request_number;
		Date reservation_date;
		Date rental_start;
		Date rental_end;
		int vehicle_limit;

	public:
		ReservationRequest();
		~ReservationRequest();

		void setCustomer(std::string, std::string, Date);
		void setVehicle_Type(std::string);
		void setReservation_Counter(int);
		void setRequest_Number(int);
		void setReservation_Date(Date);
		void setRental_Start(Date);
		void setRental_End(Date);
		void setVehicle_Limit(int);

		Customer getCustomer();
		std::string getVehicle_Type();
		int getReservation_Counter();
		int getRequest_Number();
		Date setReservation_Date();
		Date getRental_Start();
		Date getRental_End();
		int getVehicle_Limit();

		void printCustomer();
		void printReservation_Request();
};
#endif // RESERVATION_REQUEST_HPP
