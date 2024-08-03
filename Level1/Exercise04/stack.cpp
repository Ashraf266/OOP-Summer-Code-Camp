#include "stack.hpp"
#include <iostream>



int Stack::counter = 0;


Stack::Stack(int n)
{
	this->size = n;
	this->st = new int[size];
	this->top = 0;
	this->counter++;
	std::cout<< "Stack Number " << this->counter << " Constructed" << std::endl;
}

Stack::Stack(const Stack &x)
{
	this->top = x.top;
	this->size = x.size;
	this->st = new int[size];
	for(int i=0; i<top; i++)
		this->st[i] = x.st[i];
	this->counter++;
	std::cout<< "Copy Stack Number " << this->counter << " Constructed" << std::endl;
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
	std::cout<< "Stack Number " << this->counter << " Destructed" << std::endl;
	this->counter--;
}



void viewContent(Stack x)
{
	int t= x.top;
	while(t > 0)
		std::cout << x.st[--t] << std::endl;
}
int Stack::getTop()
{
	return this->top;
}
int Stack::getSize()
{
	return this->size;
}
int* Stack::getStPtr()
{
	return this->st;
}

Stack& Stack:: operator= (Stack &s)
{

	std::cout << "using operator over loading" << std::endl;

	delete[] this->st;
	this->top = s.getTop();
	this->size = s.getSize();
	this->st = new int[this->size];
	for(int i=0; i<this->top;i++)
	{
		this->st[i] = s.getStPtr()[i];
	}

	return *this;
}
