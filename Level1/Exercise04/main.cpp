#include <iostream>
#include "stack.hpp"
#include "complex.hpp"


using std::cout;
using std::endl;
using std::cin;

Stack getStack()
{
	Stack a;
	a.push(2);
	std::cout << "Before return" << std::endl;

	return a;
}

int main(void)
{

	Stack s1(4);
	Stack s2(5);
	Stack s3(5);

	s1.push(3);
	s1.push(4);
	s1.push(5);

	s3 =s2 = s1;

	Complex c1(1,2);
	Complex c2(3,-4);
	Complex c3;

	c3 = c1 + c2;
	c3.print();

	c3 = c3 + 3;
	c3.print();

	c3 = 5 + c3 + 1;
	c3.print();


	return 0;
}
