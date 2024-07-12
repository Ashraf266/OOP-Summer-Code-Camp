/*
 * complex.cpp
 *
 *  Created on: Jul 12, 2024
 *      Author: Ashraf
 */
#include "complex.hpp"
#include <iostream>


void Complex::setReal(float real)
{
	this->real = real;
}

void Complex::setImag(float imag)
{
	this->imag = imag;
}

float Complex::getReal()
{
	return this->real;
}

float Complex::getImag()
{
	return this->imag;
}

void Complex::print()
{
	if(this->imag < 0)
	{
		std::cout << this->real << "-" << -this->imag << "i" << std::endl;
	}
	else
	{
		std::cout << this->real << "+" << this->imag << "i" << std::endl;
	}
}

Complex Complex::add(Complex comp)
{
	Complex temp;
	temp.setReal(this->real + comp.getReal());
	temp.setImag(this->imag + comp.getImag());

	return temp;
}

Complex Complex::sub(Complex comp)
{
	Complex temp;
	temp.setReal(this->real - comp.getReal());
	temp.setImag(this->imag - comp.getImag());

	return temp;
}




