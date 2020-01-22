////JOEUN PARK 40066406, JONAH DORANT 21313339 section W
#include "cashpayment.hpp"
#include <iostream>

CashPayment::CashPayment()
{
}
CashPayment::CashPayment(float a) : Payment (a)
{
	
}
CashPayment::~CashPayment()
{
	std::cout << "Destructing cash payment" << std::endl;

}

void CashPayment::paymentDetails()
{
	std::cout << "Your cash payment amount comes to: $" << getPayment() << std::endl;
}
