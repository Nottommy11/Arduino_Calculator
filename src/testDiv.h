// testDiv.h
#ifndef TEST_DIV_H
#define TEST_DIV_H

#include <Arduino.h> // Include necessary Arduino headers

bool testSingleDivision(double*, double*, double*, char*, bool*);
bool testSevenDigDivision(double*, double*, double*, char*, bool*);
bool testDecimalDivision(double*, double*, double*, char*, bool*);
bool testNegativeDivision(double*, double*, double*, char*, bool*);
bool testZeroDivision(double*, double*, double*, char*, bool*);
bool testZeroErrorDivision(double*, double*, double*, char*, bool*);
bool testMutlitpleDivision(double*, double*, double*, char*, bool*);

#endif // TEST_DIV_H
