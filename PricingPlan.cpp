/*
 * PricingPlan.cpp
 *
 *  Created on: 11/06/2018
 *      Author: aet
 */



#include "Price.h"
#include "PricingPlan.h"



//CONSTRUCTOR
pricingPlan::pricingPlan()
{

}





float pricingPlan::calculateCost(int durationCallDC)
{
	float CostCall = 0;

	if(durationCallDC <= 10)
	{
		CostCall = 10;
	}
	else if(durationCallDC >= 11 && durationCallDC <= 20)
	{
		CostCall = 15;
	}
	else if(durationCallDC >= 21)
	{
		CostCall = 25;
	}

	return CostCall;
}





//DESTRUCTOR
pricingPlan::~pricingPlan()
{
	cout << "pricingPlan removed." << endl;
}
