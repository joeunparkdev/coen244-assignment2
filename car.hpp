////JOEUN PARK 40066406, JONAH DORANT 21313339 section W
#ifndef CAR_HPP
#define CAR_HPP

#include <iostream>
#include "vehicle.hpp"

class Car : public Vehicle
{
	private:
		int capacity;

	public:
		Car();
		Car(int, int, std::string, std::string, Date);
		~Car();

		void setCapacity(int);
		int getCapacity();

		void printCapacity();
		void printCar();
};
#endif // CAR_HPP
