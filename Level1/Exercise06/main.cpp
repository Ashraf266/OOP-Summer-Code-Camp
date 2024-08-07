/*
 * main.cpp
 *
 *  Created on: Aug 7, 2024
 *      Author: user
 */


#include <iostream>
#include "Base.h"
#include "Derived.h"

using std::cout;
using std::endl;


int main(void)
{


	Derived obj;

	cout << obj.product() << endl;
	cout << obj.Base::product() << endl;



	return 0;
}



