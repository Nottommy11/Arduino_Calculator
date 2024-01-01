// calculator.cpp
#include "calculator.h"
#include "display.h"

namespace Calculator
{
	double num1 = 0;
	double num2 = 0;
	double result = 0;
	// Initialize mathOp to 'N' for no operation
	char mathOp = 'N';
	bool resultReady = false;

	// This function calculates the result of the operation based on the math operation
	bool calculate()
	{
		switch (mathOp)
		{
		case '+':
			result = num1 + num2;
			// This is needed to be able to string together multiple operations on multiple numbers
			mathOp = 'N';
			break;
		case '-':
			result = num1 - num2;
			mathOp = 'N';
			break;
		case '*':
			result = num1 * num2;
			mathOp = 'N';
			break;
		case '/':
			// This is to prevent a divide by 0 error
			if (num2 == 0)
			{
				printToDisplay("Divide by 0 Error");
				delay(2000);
				// Reprint the previous result
				printToDisplay(String(num1, 2)); // Display with 2 decimal places
				mathOp = 'N';
        // This return is only for testing purposes
				return 0;
			}

			result = num1 / num2;
			mathOp = 'N';
			break;
		}

		// Serial.println("Result: " + String(result));

		// This is needed to be able to string together multiple operations on multiple numbers
		resultReady = true;
	}
}
