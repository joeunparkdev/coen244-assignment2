////JOEUN PARK 40066406, JONAH DORANT 21313339 section W
#ifndef TRUCK_HPP
#define TRUCK_HPP

#include "vehicle.hpp"

class Truck : public Vehicle
{
	private:
		int weight_limit;

	public:
		Truck();
		Truck(int, int, std::string, std::string, Date);
		~Truck();

		void setWeight_limit(int);
		
		int getWeight_limit();

		void printWeight_Limit();
		void printTruck();

};

#endif // TRUCK_HPP
