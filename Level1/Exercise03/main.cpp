#include <iostream>
#include "stack.hpp"


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

	Stack s1(5);
	Stack s2(s1);
	Stack s3 = s2;
	Stack s4;

	s4 = s1;
	s4.push(0);


	s1.push(1);
	s1.push(2);
	s1.push(3);

	viewContent(s1);

	Stack s(getStack());
	std::cout << "After return" << std::endl;



	return 0;
}
