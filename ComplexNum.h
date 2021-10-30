/**
* Austin Nguyen
* Complex Number Calculations
* This program adds, multiplies, divides, and finds the greatest common divisor of two complex numbers. As well as check for whole numbers.
**/

#ifndef COMPLEXNUM_H
#define COMPLEXNUM_H
using namespace std;

class ComplexNum
{
private:
	double real;
	double imaginary;

	/**
	* Checks if both the real and imaginary numbers are whole numbers
	*
	* @return True if they are whole numbers, and false if otherwise.
	* @pre Both the real and imaginary numbers have to be numbers
	**/
	bool isWhole();

public:
	
	ComplexNum();
	ComplexNum(double pReal, double pImaginary);
	double getReal() const;
	double getImaginary() const;
	void setReal(double pReal);
	void setImaginary(double pImaginary);
	void set(double pReal, double pImaginary);
	void print() const;
	ComplexNum add(const ComplexNum& compNum);
	ComplexNum multiply(const ComplexNum&);
	ComplexNum divide(const ComplexNum&);
	bool isImaginary();
	int findGCD();
};

#endif // !1