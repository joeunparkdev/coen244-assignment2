//JOEUN PARK 40066406, JONAH DORANT 21313339 section W
#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <iostream>
#include "date.hpp"

class Customer
{
private:
  std::string name;
  std::string driving_license;
  Date birthday;

public:
  Customer();
  Customer(std::string, std::string, Date);
  ~Customer();

  void setName(std::string);
  void setDriving_License(std::string);
  void setBirthday(Date);

  std::string getName() const;
  std::string getDriving_License() const;
  Date getBirthday() const;

  void printCustomer();
};

#endif // CUSTOMER_HPP

/*
Define a class Customer with the following data members: 
The name of the customer as a standard library string.
The driving license of the customer as a library string.
The date of birth of the customer (from part a).
*/