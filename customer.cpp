////JOEUN PARK 40066406, JONAH DORANT 21313339 section W
#include <iostream>
#include "customer.hpp"
#include "date.hpp"
#include <string>



		Customer::Customer()
		{
			name = "None found";
			driving_license = "111 aaa";
		}
		Customer::Customer(std::string n, std::string l, Date d )
		{
			name = n;
			driving_license = l;
			birthday = d;
		}

		Customer::~Customer()
		{
			std::cout << "Destructing customer" << std::endl;

		}
//////////////////////////////////////////////////////////////////////////////////////////////
		void Customer::setName(std::string n)
		{
			name = n;
		}
		void Customer::setDriving_License(std::string d)
		{
			driving_license = d;
		}
		void Customer::setBirthday(Date date)
		{
			birthday = date;
		}
///////////////////////////////////////////////////////////////////////////////////////////////
		std::string Customer::getName() const
		{
			return name;
		}
		std::string Customer::getDriving_License() const
		{
			return driving_license;
		}
		Date Customer::getBirthday() const
		{
			return birthday;
		}
//////////////////////////////////////////////////////////////////////////////////////////////
		void Customer::printCustomer()
		{
			std::cout<< "Name: " << name<<", " << "Driving License: " << driving_license<<std::endl;
			std::cout << "Birthday: ";
			birthday.printDate();
		}
