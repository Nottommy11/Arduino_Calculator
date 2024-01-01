// calculator.h
#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <Arduino.h> // Include necessary Arduino headers

namespace Calculator
{
	extern double num1;
	extern double num2;
	extern double result;
	extern char mathOp;
	extern bool resultReady;

	bool calculate();
}

#endif // CALCULATOR_H
