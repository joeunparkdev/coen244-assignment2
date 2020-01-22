////JOEUN PARK 40066406, JONAH DORANT 21313339 section W
#ifndef CREDITCARDPAYMENT_HPP
#define CREDITCARDPAYMENT_HPP

#include "payment.hpp"
#include <iostream>

class CreditCardPayment : public Payment
{
	private:
		std::string card_name;
		std::string card_expiration;
		int card_number;

	public:
		CreditCardPayment();
		CreditCardPayment(float);  //Need to take into account constructor for both payment AND creditcardpayment
		~CreditCardPayment();

		void setCard_Name(std::string n);
		void setCard_Expiration(std::string e);
		void setCard_Number(int);

		std::string getCard_Name();
		std::string getCard_Expiration();
		int getCard_Number();

		void paymentDetails();
};
#endif // CREDITCARDPAYMENT_HPP
