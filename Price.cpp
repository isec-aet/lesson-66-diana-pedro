/*
 * Price.cpp
 *
 *  Created on: 11/06/2018
 *      Author: aet
 */



#include "Price.h"


//CONSTRUCTOR
Price::Price(vector)
{

}

//OTHER METHODS
//Consult

//Modify
void Price::addCall(int durationOfCall)
{
	allCallsDuration.push_back(durationOfCall);
}

void Price::resetCalls(void)
{
//	if(clientPayedCallsMade)		<---------------incomplete...
//	{
		allCallsDuration.clear();
//	}
}

float Price::calculatePayment(void)
{
//	float payAmount = getPayment();
//
//	for(int i=0; i < this->allCallsDuration.end(); ++i)
//	{
//		aux = this->allCallsDuration[i];
//
//	}
//
//	allCallsDuration.clear();
//
//	return payAmount;
}

//DESTRUCTOR
Price::~Price()
{

}


