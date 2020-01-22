////JOEUN PARK 40066406, JONAH DORANT 21313339 section W
#include "creditCardPayment.hpp"
#include <iostream>
#include <string>

//////////////////////////////////////////////////////////////////Constructors////////////////////////////////////////////////////////
CreditCardPayment::CreditCardPayment()
{
}
CreditCardPayment::CreditCardPayment(std::string n, std::string e, int c, float a) : Payment (a)
{
	card_name = n;
	card_expiration = e;
	card_number = c;
}
CreditCardPayment::~CreditCardPayment()
{
	std::cout << "Destructing credit card payment" << std::endl;
}
///////////////////////////////////////////////////////////////////Set Functions////////////////////////////////////////////////////
void CreditCardPayment::setCard_Name(std::string n)
{
	card_name = n;
}
void CreditCardPayment::setCard_Expiration(std::string e)
{
	card_expiration = e;
}
void CreditCardPayment::setCard_Number(int u)
{
	card_number = u;
}
//////////////////////////////////////////////////////////////////Get Functions/////////////////////////////////////////////////////

std::string CreditCardPayment::getCard_Name()
{
	return card_name;
}
std::string CreditCardPayment::getCard_Expiration()
{
	return card_expiration;
}
int CreditCardPayment::getCard_Number()
{
	return card_number;
}
//////////////////////////////////////////////////////////////////Print Functions//////////////////////////////////////////////////
void CreditCardPayment::paymentDetails()
{
	std::cout << "Your credit card number for " << card_name<< " is: " << card_number << ", and expires on " << card_expiration << std::endl;
	std::cout << "Your CreditCard payment amount comes to: $" << getPayment() << std::endl;
}
