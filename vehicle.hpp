#ifndef VEHICLE_HPP
#define VEHICLE_HPP
#include "date.hpp"
#include <iostream>

////JOEUN PARK 40066406, JONAH DORANT 21313339 section W
class Vehicle
{
	private:
		
		int mileage;
		std::string car_model;
		std::string vehicle_id;
		Date join_date;
		bool availability[12][30] =
		{
			{1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},      //January
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},		//February
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},		//March
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},		//April
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},		//May
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},		//June
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},		//July
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},		//August
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},		//September
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},		//October
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},		//November
			{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}		//December		
		};

	public:
		Vehicle();
		Vehicle(int, std::string, std::string, Date);
		virtual ~Vehicle()=0;

		void setMileage(int);
		void setCar_Model(std::string);
		void setVehicle_Id(std::string);
		void setDate(Date);
		void set_Availability(int, int, bool);

		int getMileage();
		std::string getCar_Model();
		std::string getVehicle_Id();
		Date getDate();
		bool getAvailability(int, int);
		bool getAvailability(Date, Date);
		void setAvailability(Date, Date, bool);

		void availability_function();
		void printVehicle();

};

#endif // VEHICLE_HPP
