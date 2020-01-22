////JOEUN PARK 40066406, JONAH DORANT 21313339 section W
#include "Vehicle.hpp"
#include "date.hpp"
#include <iostream>
#include <string>

using namespace std;

Vehicle::Vehicle()
{
	mileage = 0;
	car_model = "n/a";
	vehicle_id = "none assigned";
}
Vehicle::Vehicle(int m, std::string s, std::string v, Date date)
{
	mileage = m;
	car_model = s;
	vehicle_id = v;
	join_date = date;
}
Vehicle::~Vehicle()
{
	std::cout << "Destructing Vehicle" << std::endl;
}

//////////////////////////////////////////////////////////////////////////////////////////Set Functions////////////////////////////////////////////////////////////////

void Vehicle::setMileage(int m) 
{
	mileage = m;
}
void Vehicle::setCar_Model(std::string c)
{
	car_model = c;
}
void Vehicle::setVehicle_Id(std::string v)
{
	vehicle_id = v;
}
void Vehicle::setDate(Date d)
{
	join_date = d;
}
void Vehicle::set_Availability(int m, int d, bool b)
{
	availability[m-1][d-1] = b;
}

///////////////////////////////////////////////////////////////////////////////////////Get Functions///////////////////////////////////////////////////////////////////

int Vehicle::getMileage()
{
	return mileage;
}
std::string Vehicle::getCar_Model()
{
	return car_model;
}
std::string Vehicle::getVehicle_Id()
{
	return vehicle_id;
}
Date Vehicle::getDate()
{
	return join_date;
}
bool Vehicle::getAvailability(int m, int d)
{
	return availability[m-1][d-1];
}

bool Vehicle::getAvailability(Date start, Date end)
{
	Date *now;
	now = &start;
	do {
		if(!availability[now->month - 1][now->day - 1]) {
			return false;
		}

		now = new Date(now->day + 1, now->month, now->year);
	} while (!now->isBiggerThan(end));

	return true;
}

void Vehicle::setAvailability(
	Date start,
	Date end,
	bool availability)
{
	Date *now;
	now = &start;
	do {
		availability[now->month - 1][now->day - 1] = availability;

		now = new Date(now->day + 1, now->month, now->year);
	} while (!now->isBiggerThan(end));
}




//////////////////////////////////////////////////////////////////////////////////////Other Functions///////////////////////////////////////////

void Vehicle::availability_function()	//Function that checks requested length with list of available dates, and can reserve said available dates on request
{
	int results = 1;
	int answer;

	cout << "Let us check the availabilities of the given dates!  Please enter the month (numerally), followed by the day (also numerally):" << endl;
	int month, day;
	cin >> month;
	month = month;
	cin >> day;
	day = day;
	

	cout << "How many days would you like to reserve?" << endl;
	int length;
	cin >> length;


	for (int counter = 1; counter <= length; counter++)
	{
		cout << "attempt number " << counter << " on month " << month << " and day " << day + counter - 1 << endl;

	 if (availability[month - 1][day + counter - 2] == false)
		{
			results = 0;
		}
	}

	if (results == 1)	//If vehicle is available
	{	
		for (int counter1 = 1; counter1 <= length; counter1++)		//Bug testing, to see original date values
		{
			cout << availability[month - 1][day + counter1 - 2] << " " << endl;
		}
		cout << "The vehicle is available! Would you like to reserve these dates?  Enter 1 for yes, or 0 for no." << endl;
		
		cin >> answer;

		if (answer == 1)		//If they want to reserve dates...
		{

			for (int counter2 = 1; counter2 <= length; counter2++)		//...Set those dates to false								
			{
				availability[month][day + counter2 - 1] = false;
			}

			cout << "All Set!" << endl;

			for (int counter3 = 1; counter3 <= length; counter3++)		//Bug test to see if date values have changed
			{
				cout << availability[month][day + counter3 - 1] << " " << endl;

			}

		
			
		}

		else if (answer == 0)	//If they don't...
		{
			cout << "Understandable, have a nice day." << endl;

			
		}

	}

	else if (results == 0)	//If vehicle is not available
	{
		cout << "We're sorry, the vehicle is unavailable during that period." << endl;

		

	}
}

void Vehicle::printVehicle()
{
	cout << mileage << " " << car_model << " " << vehicle_id << " " << endl;
	join_date.printDate();
}
