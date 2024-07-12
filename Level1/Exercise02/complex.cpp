/*
 * complex.cpp
 *
 *  Created on: Jul 12, 2024
 *      Author: Ashraf
 */
#include "complex.hpp"
#include <iostream>


Complex::Complex()
{
	this->real = 0;
	this->imag = 0;
	std::cout << "Object Constructed" << std::endl;
}

Complex::Complex(float num)
{
	this->real = num;
	this->imag = num;
	std::cout << "Object Constructed" << std::endl;
}

Complex::Complex(float real, float imag)
{
	this->real = real;
	this->imag = imag;
	std::cout << "Object Constructed" << std::endl;
}

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

Complex Complex::add(Complex &comp)
{
	Complex temp;
	temp.setReal(this->real + comp.getReal());
	temp.setImag(this->imag + comp.getImag());

	return temp;
}

Complex Complex::sub(Complex &comp)
{
	Complex temp;
	temp.setReal(this->real - comp.getReal());
	temp.setImag(this->imag - comp.getImag());

	return temp;
}

void Complex::setComplex(float num)
{
	this->real = num;
	this->imag = num;
}

void Complex::setComplex(float real, float imag)
{
	this->real = real;
	this->imag = imag;
}

Complex::~Complex()
{
	std::cout << "Object Destructed" << std::endl;
}




