/*
 * Base.cpp
 *
 *  Created on: Aug 7, 2024
 *      Author: user
 */

#include "Base.h"

Base::Base() {
	// TODO Auto-generated constructor stub
	a=0;
	b=0;
}

Base::Base(int a, int b)
{
	this->a= a;
	this->b= b;
}

int Base::product()
{
	return a*b;
}

