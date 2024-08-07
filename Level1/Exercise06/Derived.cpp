/*
 * Derived.cpp
 *
 *  Created on: Aug 7, 2024
 *      Author: user
 */

#include "Derived.h"

Derived::Derived(): Base(1,2) {
	// TODO Auto-generated constructor stub
	c=3;
}


int Derived::product(){

	return Base::product()*c;
}
