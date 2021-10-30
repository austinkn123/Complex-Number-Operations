/**
* Austin Nguyen
* Complex Number Calculations
* This program adds, multiplies, divides, and finds the greatest common divisor of two complex numbers. As well as check for whole numbers.
**/

#include "ComplexNum.h"
#include <iostream>
#include <cmath>
using namespace std;

ComplexNum::ComplexNum()
{
	real = 1;
	imaginary = 0;
}

ComplexNum::ComplexNum(double pReal, double pImaginary)
{
	setReal(pReal);
	setImaginary(pImaginary);
}

double ComplexNum::getReal() const
{
	return real;
}

double ComplexNum::getImaginary() const
{
	return imaginary;
}

void ComplexNum::setReal(double pReal)
{
	real = pReal;
}

void ComplexNum::setImaginary(double pImaginary)
{
	imaginary = pImaginary;
}

void ComplexNum::set(double pReal, double pImaginary)
{
	real = pReal;
	imaginary = pImaginary;
}

void ComplexNum::print() const
{
	cout << "(" << real << " + " << imaginary << "i)";
}

bool ComplexNum::isImaginary()
{
	if (imaginary != 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool ComplexNum::isWhole()
{
	if ((fmod(real, 1) == 0.0) && ((fmod(imaginary, 1) == 0.0)))
	{
		return true;
	}
	else
	{
		return false;
	}
}

ComplexNum ComplexNum::add(const ComplexNum& compNum)
{
	ComplexNum sum;

	sum.real = real;
	sum.imaginary = imaginary;

	sum.real = compNum.real + sum.real;
	sum.imaginary = compNum.imaginary + sum.imaginary;

	return sum;
}

ComplexNum ComplexNum::multiply(const ComplexNum& compNum)
{
	ComplexNum multNum, multAnswer;
	multNum.real = real;
	multNum.imaginary = imaginary;

	multAnswer.real = (multNum.real * compNum.real) - (multNum.imaginary * compNum.imaginary);
	multAnswer.imaginary = (multNum.real * compNum.imaginary) + (multNum.imaginary * compNum.real);

	return multAnswer;
}

ComplexNum ComplexNum::divide(const ComplexNum& compNum)
{
	ComplexNum divNum, divAnswer;

	divNum.real = real;
	divNum.imaginary = imaginary;

	divAnswer.real = ((divNum.real * compNum.real) + (divNum.imaginary * compNum.imaginary)) / ((pow(compNum.real, 2)) + (pow(compNum.imaginary, 2)));
	divAnswer.imaginary = ((divNum.imaginary * compNum.real) - (divNum.real * compNum.imaginary)) / ((pow(compNum.real, 2)) + (pow(compNum.imaginary, 2)));

	return divAnswer;
}

int ComplexNum::findGCD()
{
	double gcd;

	if (real < 0.0)
	{
		real = real * -1;
	}
	if (imaginary < 0.0)
	{
		imaginary = imaginary * -1;
	}

	for (int i = 1; (i <= real) && (i <= imaginary); ++i)
	{
		if ((fmod(real, i) == 0.0) && ((fmod(imaginary, i) == 0.0)))
		{
			gcd = i;
		}
	}
	return gcd;
}