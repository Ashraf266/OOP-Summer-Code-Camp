/*
 * Derived.h
 *
 *  Created on: Aug 7, 2024
 *      Author: user
 */

#ifndef DERIVED_H_
#define DERIVED_H_

#include "Base.h"

class Derived: public Base{
private:
	int c;
public:
	Derived();

	int product();
};

#endif /* DERIVED_H_ */
