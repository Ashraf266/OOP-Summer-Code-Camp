/*
 * stack.hpp
 *
 *  Created on: Jul 12, 2024
 *      Author: Ashraf
 */

#ifndef STACK_HPP_
#define STACK_HPP_

class Stack {

private:
	int top;
	int size;
	int *st;
	static int counter;

public:
	Stack(int=10);
	int pop();
	void push(int);
	~Stack();
	static int getCounter();

};


#endif /* STACK_HPP_ */
