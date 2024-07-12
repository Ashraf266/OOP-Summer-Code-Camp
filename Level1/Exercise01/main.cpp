#include <iostream>
#include "complex.hpp"

using std::cout;
using std::endl;
using std::cin;


int main(void)
{
	float temp;
	Complex myComp1, myComp2, resultComp;

	cout << "Please Enter Complex 1 Real Number: ";
	cin >> temp;
	myComp1.setReal(temp);

	cout << "Please Enter Complex 1 Imaginary Number: ";
	cin >> temp;
	myComp1.setImag(temp);

	cout << "Please Enter Complex 2 Real Number: ";
	cin >> temp;
	myComp2.setReal(temp);

	cout << "Please Enter Complex 2 Imaginary Number: ";
	cin >> temp;
	myComp2.setImag(temp);

	cout << "Complex 1: ";
	myComp1.print();
	cout << "Complex 2: ";
	myComp2.print();


	resultComp = myComp1.add(myComp2);
	resultComp.print();

	resultComp = myComp1.sub(myComp2);
	resultComp.print();


	return 0;
}
