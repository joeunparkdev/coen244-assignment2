////JOEUN PARK 40066406, JONAH DORANT 21313339 section W
#ifndef PAYMENT_HPP
#define PAYMENT_HPP

class Payment
{
	private:
		float payment_amount;

	public:
		Payment();
		Payment(float);
		// virtual ~Payment()=0;

		void setPayment(float);
		
		float getPayment();

		void paymentDetails();
};


#endif // PAYMENT_HPP
