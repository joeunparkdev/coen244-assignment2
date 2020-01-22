////JOEUN PARK 40066406, JONAH DORANT 21313339 section W
#include "payment.hpp"
#include <iostream>


Payment::Payment()
{
	payment_amount = 3.14;
}
// Payment::~Payment()
// {
// }

void Payment::setPayment(float p)
{
	payment_amount = p;
}

float Payment::getPayment()
{
	return payment_amount;
}

void Payment::paymentDetails() 
{
	std::cout << "Your payment amount comes to: $" << payment_amount << std::endl;
}

