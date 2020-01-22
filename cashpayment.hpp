////JOEUN PARK 40066406, JONAH DORANT 21313339 section W
#ifndef CASHPAYMENT_HPP
#define CASHPAYMENT_HPP

#include "payment.hpp"

class CashPayment: public Payment
{
	public:
		CashPayment();
		CashPayment(float);
		~CashPayment();

		void paymentDetails();
};

#endif // CASHPAYMENT_HPP
