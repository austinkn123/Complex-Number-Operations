/**
* Austin Nguyen
* Complex Number Calculations
* This program adds, multiplies, divides, and finds the greatest common divisor of two complex numbers. As well as check for whole numbers.
**/
#include <iostream>
#include "ComplexNum.h"
#include <math.h>
using namespace std;

int main()
{
	ComplexNum cNum1(3, 4);
	ComplexNum cNum2;
	ComplexNum result;

	cout << "** TESTING VARIOUS **" << endl << endl;
	cout << "Real part: " << cNum1.getReal()
		<< " [should be 3]" << endl;
	cout << "Imaginary part: " << cNum1.getImaginary()
		<< " [should be 4]" << endl;
	cNum2.print();
	cout << " [should be (1 + 0i)]" << endl;
	cout << "Is imaginary? " << cNum2.isImaginary()
		<< " [ should be 0]" << endl;
	cNum1.print();
	cout << " [should be (3 + 4i)]" << endl;
	cout << "Is imaginary? " << cNum1.isImaginary()
		<< " [ should be 1]" << endl;
	cNum1.set(8, 0);
	cNum1.print();
	cout << " [should be (8 + 0i)]" << endl;
	cNum1.setReal(10.4);
	cNum1.setImaginary(-4.5);
	cNum1.print();
	cout << " [should be (10.4 + -4.5i)]" << endl << endl;
	
	cout << "** TESTING ADD **" << endl << endl;
	cNum1.set(3, 4);
	cNum2.set(3.2, 1.4);
	result = cNum1.add(cNum2);
	cNum1.print();
	cout << " + ";
	cNum2.print();
	cout << " = ";
	result.print();
	cout << " [should be (6.2 + 5.4i)]" << endl;

	cNum1.set(3, -4);
	cNum2.set(-3.2, 1.4);
	result = cNum1.add(cNum2);
	cNum1.print();
	cout << " + ";
	cNum2.print();
	cout << " = ";
	result.print();
	cout << " [should be (-0.2 + -2.6i)]" << endl;

	cNum1.set(3, 0);
	cNum2.set(0, 1.4);
	result = cNum1.add(cNum2);
	cNum1.print();
	cout << " + ";
	cNum2.print();
	cout << " = ";
	result.print();
	cout << " [should be (3 + 1.4i)]" << endl << endl;

	
	cout << "** TESTING MULTIPLY **" << endl << endl;
	cNum1.set(3, 4);
	cNum2.set(3.2, 1.4);
	result = cNum1.multiply(cNum2);
	cNum1.print();
	cout << " * ";
	cNum2.print();
	cout << " = ";
	result.print();
	cout << " [should be (4 + 17i)]" << endl;

	cNum1.set(3, -4);
	cNum2.set(-3.2, 1.4);
	result = cNum1.multiply(cNum2);
	cNum1.print();
	cout << " * ";
	cNum2.print();
	cout << " = ";
	result.print();
	cout << " [should be (-4 + 17i)]" << endl;

	cNum1.set(3, 0);
	cNum2.set(0, 1.4);
	result = cNum1.multiply(cNum2);
	cNum1.print();
	cout << " * ";
	cNum2.print();
	cout << " = ";
	result.print();
	cout << " [should be (0 + 4.2i)]" << endl << endl;
	
	cout << "** TESTING DIVIDE **" << endl << endl;
	cNum1.set(3, 4);
	cNum2.set(3.2, 1.4);
	result = cNum1.divide(cNum2);
	cNum1.print();
	cout << " * ";
	cNum2.print();
	cout << " = ";
	result.print();
	cout << " [should be (1.2459 + 0.704918i)]" << endl;

	cNum1.set(3, -4);
	cNum2.set(-3.2, 1.4);
	result = cNum1.divide(cNum2);
	cNum1.print();
	cout << " * ";
	cNum2.print();
	cout << " = ";
	result.print();
	cout << " [should be (-1.2459 + 0.704918i)]" << endl;

	cNum1.set(3, 0);
	cNum2.set(0, 1.4);
	result = cNum1.divide(cNum2);
	cNum1.print();
	cout << " * ";
	cNum2.print();
	cout << " = ";
	result.print();
	cout << " [should be (0 + -2.14286i)]" << endl << endl;
	
	cout << "** TESTING GCD **" << endl << endl;
	cNum1.set(24, 72);
	cNum1.print();
	int gcd = cNum1.findGCD();
	cout << " is equal to " << gcd << "("
		<< (cNum1.getReal() / gcd) << " + " << (cNum1.getImaginary() / gcd)
		<< "i) [should be 24(1 + 3i)]" << endl;
	cNum1.set(81, 56);
	cNum1.print();
	gcd = cNum1.findGCD();
	cout << " is equal to " << gcd << "("
		<< (cNum1.getReal() / gcd) << " + " << (cNum1.getImaginary() / gcd)
		<< "i) [should be 1(81 + 56i)]" << endl;

	
	return 0;

}