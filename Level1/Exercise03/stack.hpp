/*
 * stack.hpp
 *
 *  Created on: Jul 12, 2024
 *      Author: Ashraf
 */

#ifndef STACK_HPP_
#define STACK_HPP_

class Stack {

	friend void viewContent(Stack);

private:
	int top;
	int size;
	int *st;
	static int counter;

public:
	Stack(int=10);
	Stack(const Stack &);
	int pop();
	void push(int);
	~Stack();
	static int getCounter();

};


#endif /* STACK_HPP_ */
