/*
 * complex.hpp
 *
 *  Created on: Jul 12, 2024
 *      Author: Ashraf
 */

#ifndef COMPLEX_HPP_
#define COMPLEX_HPP_



class Complex {

	friend Complex operator + (float real, Complex &c);

private:
	float real;
	float imag;

public:
	Complex();
	Complex(float);
	Complex(float, float);
	void setReal(float);
	void setImag(float);
	float getReal();
	float getImag();
	void print();
	Complex add(Complex&);
	Complex sub(Complex&);
	void setComplex(float);
	void setComplex(float, float);
	~Complex();
	Complex operator + (Complex&);
	Complex operator + (float);
};





#endif /* COMPLEX_HPP_ */
