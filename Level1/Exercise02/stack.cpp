#include "stack.hpp"
#include <iostream>



int Stack::counter = 0;


Stack::Stack(int n)
{
	this->size = n;
	this->st = new int[size];
	this->top = 0;
	this->counter++;
}

void Stack::push(int num)
{
	if(this->top == this->size)
	{
		std::cout << "Stack is Full" << std::endl;
	}
	else
	{
		st[top] = num;
		top++;
	}
}

int Stack::pop()
{
	if(this->top == 0)
	{
		std::cout << "Stack is Empty" << std::endl;
		return -1;
	}
	else
	{
		int temp = st[top];
		top--;
		return temp;
	}
}



int Stack::getCounter()
{
	return counter;
}

Stack::~Stack()
{
	delete[] this->st;
	this->counter--;
}
