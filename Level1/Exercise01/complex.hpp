/*
 * complex.hpp
 *
 *  Created on: Jul 12, 2024
 *      Author: Ashraf
 */

#ifndef COMPLEX_HPP_
#define COMPLEX_HPP_



class Complex {

private:
	float real;
	float imag;

public:
	void setReal(float);
	void setImag(float);
	float getReal();
	float getImag();
	void print();
	Complex add(Complex);
	Complex sub(Complex);
};





#endif /* COMPLEX_HPP_ */
