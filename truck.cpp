////JOEUN PARK 40066406, JONAH DORANT 21313339 section W
#include "Truck.hpp"

using namespace std;


Truck::Truck()
{
	weight_limit = 0;
}
Truck::Truck(int w, int m, std::string s, std::string v, Date date) : Vehicle(m, s, v, date)

{
	weight_limit = w;
}
Truck::~Truck()
{
	std::cout << "Destructing Truck" << std::endl;

}

void Truck::setWeight_limit(int w)
{
	weight_limit = w;
}

int Truck::getWeight_limit()
{
	return weight_limit;
}

void Truck::printWeight_Limit()
{
	cout << weight_limit << endl;
}

void Truck::printTruck()
{
	printVehicle();
	std::cout << "Truck weight limit: " << weight_limit << std::endl;

}
