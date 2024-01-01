// testCalculator.h
#ifndef TEST_CALCULATOR_H
#define TEST_CALCULATOR_H

#include <Arduino.h> // Include necessary Arduino headers

void testMain(double*, double*, double*, char*, bool*);
void printHeader();
void printSpacer();
void printFunctInfo(char[], bool);
//void printPassFail(String, double*, double*, bool*, bool);
void resetPtrs(double*, double*, double*, char*, bool*);
int setupOp(double*, double*, char*, double, double, char);
void setupMultipleOp(double*, double*, char*, double*, double, double, double, char);

#endif // TEST_CALCULATOR_H
