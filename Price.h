/*
 * Price.h
 *
 *  Created on: 11/06/2018
 *      Author: aet
 */

#ifndef PRICE_H_
#define PRICE_H_



#include <iostream>
#include <vector>
#include <sstream>

using namespace std;




class Price{
	vector <int> allCallsDuration;

public:
	//CONSTRUCTOR
	Price(vector);

	//OTHER METHODS
	//Consult

	//Modify
	void addCall(int);
	void resetCalls(void);
	virtual float calculatePayment(void);

	//DESTRUCTOR
	virtual ~Price();
};




#endif /* PRICE_H_ */
