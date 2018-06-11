/*
 * Client.h
 *
 *  Created on: 11/06/2018
 *      Author: aet
 */

#ifndef CLIENT_H_
#define CLIENT_H_



#include <iostream>
#include <vector>
#include <sstream>
#include "PricingPlan.h"

using namespace std;



class Client{
	string name;
	int ID;
	pricingPlan *myTariff;
public:
	int& beginCall(int);
	int finishCall(int);
	float payCalls(pricingPlan&);
};




#endif /* CLIENT_H_ */
