/*
 * PricingPlan.h
 *
 *  Created on: 11/06/2018
 *      Author: aet
 */

#ifndef PRICINGPLAN_H_
#define PRICINGPLAN_H_



#include <iostream>
#include <vector>
#include <sstream>

using namespace std;



class pricingPlan: public Price{
	string name;
public:
	//CONSTRUCTOR
	pricingPlan(string, &vector);

	//OTHER METHODS
	//Consult

	//Modify
	float calculateCost(int);

	//DESTRUCTOR
	~pricingPlan();
};



#endif /* PRICINGPLAN_H_ */
