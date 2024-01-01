// testAdd.cpp
#include "testAdd.h"

#include "testCalculator.h"

bool testSingleAddition(double *num1Ptr, double *num2Ptr, double *resultPtr, char *mathOpPtr, bool *resReadyPtr) {
  bool pass = 0;
  const double RESULT = 3.00;

  setupOp(num1Ptr, num2Ptr, mathOpPtr, 1.00, 2.00, '+');

  if(*resultPtr == RESULT && *resReadyPtr == 1){
    pass = 1;
    // printPassFail("testSingleAddition", &RESULT, resultPtr, resReadyPtr, 1);
  }
  // else{
  //   printPassFail("testSingleAddition", &RESULT, resultPtr, resReadyPtr, 0);
  // }

  resetPtrs(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);

  return pass;
}

bool testSevenDigAddition(double *num1Ptr, double *num2Ptr, double *resultPtr, char *mathOpPtr, bool *resReadyPtr) {
  bool pass = 0;
  const double RESULT = 300000000.00;

  setupOp(num1Ptr, num2Ptr, mathOpPtr, 100000000.00, 200000000.00, '+');

  if(*resultPtr == RESULT && *resReadyPtr == 1){
    pass = 1;
    // printPassFail("testSevenDigAddition", &RESULT, resultPtr, resReadyPtr, 1);
  }
  // else{
  //   printPassFail("testSevenDigAddition", &RESULT, resultPtr, resReadyPtr, 0);
  // }

  resetPtrs(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);

  return pass;
}

bool testDecimalAddition(double *num1Ptr, double *num2Ptr, double *resultPtr, char *mathOpPtr, bool *resReadyPtr) {
  bool pass = 0;
  const double RESULT = 30.25;

  setupOp(num1Ptr, num2Ptr, mathOpPtr, 10.12, 20.13, '+');

  if(*resultPtr == RESULT && *resReadyPtr == 1){
    pass = 1;
    // printPassFail("testDecimalAddition", &RESULT, resultPtr, resReadyPtr, 1);
  }
  // else{
  //   printPassFail("testDecimalAddition", &RESULT, resultPtr, resReadyPtr, 0);
  // }

  resetPtrs(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);

  return pass;
}

bool testMutlitpleAddition(double *num1Ptr, double *num2Ptr, double *resultPtr, char *mathOpPtr, bool *resReadyPtr) {
  bool pass = 0;
  const double RESULT = 15.00;

  setupMultipleOp(num1Ptr, num2Ptr, mathOpPtr, resultPtr, 5.00, 5.00, 5.00, '+');

  if(*resultPtr == RESULT && *resReadyPtr == 1){
    pass = 1;
    // printPassFail("testMutlitpleAddition", &RESULT, resultPtr, resReadyPtr, 1);
  }
  // else{
  //   printPassFail("testMutlitpleAddition", &RESULT, resultPtr, resReadyPtr, 0);
  // }

  resetPtrs(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);

  return pass;
}
