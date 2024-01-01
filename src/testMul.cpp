// testMul.cpp
#include "testMul.h"

#include "testCalculator.h"

bool testSingleMultiplication(double *num1Ptr, double *num2Ptr, double *resultPtr, char *mathOpPtr, bool *resReadyPtr) {
  bool pass = 0;
  const double RESULT = 8.00;

  setupOp(num1Ptr, num2Ptr, mathOpPtr, 4.00, 2.00, '*');

  if(*resultPtr == RESULT && *resReadyPtr == 1){
    pass = 1;
    // printPassFail("testSingleMultiplication", &RESULT, resultPtr, resReadyPtr, 1);
  }
  // else{
  //   printPassFail("testSingleMultiplication", &RESULT, resultPtr, resReadyPtr, 0);
  // }

  resetPtrs(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);

  return pass;
}

bool testSevenDigMultiplication(double *num1Ptr, double *num2Ptr, double *resultPtr, char *mathOpPtr, bool *resReadyPtr) {
  bool pass = 0;
  const double RESULT = 200000000.00;

  setupOp(num1Ptr, num2Ptr, mathOpPtr, 1.00, 200000000.00, '*');

  if(*resultPtr == RESULT && *resReadyPtr == 1){
    pass = 1;
    // printPassFail("testSevenDigMultiplication", &RESULT, resultPtr, resReadyPtr, 1);
  }
  // else{
  //   printPassFail("testSevenDigMultiplication", &RESULT, resultPtr, resReadyPtr, 0);
  // }

  resetPtrs(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);

  return pass;
}

bool testDecimalMultiplication(double *num1Ptr, double *num2Ptr, double *resultPtr, char *mathOpPtr, bool *resReadyPtr) {
  bool pass = 0;
  const double RESULT = 2.00;

  setupOp(num1Ptr, num2Ptr, mathOpPtr, 4.00, 0.50, '*');

  if(*resultPtr == RESULT && *resReadyPtr == 1){
    pass = 1;
    // printPassFail("testDecimalMultiplication", &RESULT, resultPtr, resReadyPtr, 1);
  }
  // else{
  //   printPassFail("testDecimalMultiplication", &RESULT, resultPtr, resReadyPtr, 0);
  // }

  resetPtrs(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);

  return pass;
}

bool testNegativeMultiplication(double *num1Ptr, double *num2Ptr, double *resultPtr, char *mathOpPtr, bool *resReadyPtr) {
  bool pass = 0;
  const double RESULT = -10.00;

  setupOp(num1Ptr, num2Ptr, mathOpPtr, -5.00, 2.00, '*');

  if(*resultPtr == RESULT && *resReadyPtr == 1){
    pass = 1;
    // printPassFail("testNegativeMultiplication", &RESULT, resultPtr, resReadyPtr, 1);
  }
  // else{
  //   printPassFail("testNegativeMultiplication", &RESULT, resultPtr, resReadyPtr, 0);
  // }

  resetPtrs(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);

  return pass;
}

bool testZeroMultiplication(double *num1Ptr, double *num2Ptr, double *resultPtr, char *mathOpPtr, bool *resReadyPtr) {
  bool pass = 0;
  const double RESULT = 0.00;

  setupOp(num1Ptr, num2Ptr, mathOpPtr, 3.00, 0.00, '*');

  if(*resultPtr == RESULT && *resReadyPtr == 1){
    pass = 1;
    // printPassFail("testZeroMultiplication", &RESULT, resultPtr, resReadyPtr, 1);
  }
  // else{
  //   printPassFail("testZeroMultiplication", &RESULT, resultPtr, resReadyPtr, 0);
  // }

  resetPtrs(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);

  return pass;
}

bool testMutlitpleMultiplication(double *num1Ptr, double *num2Ptr, double *resultPtr, char *mathOpPtr, bool *resReadyPtr) {
  bool pass = 0;
  const double RESULT = 125.00;

  setupMultipleOp(num1Ptr, num2Ptr, mathOpPtr, resultPtr, 5.00, 5.00, 5.00, '*');

  if(*resultPtr == RESULT && *resReadyPtr == 1){
    pass = 1;
    // printPassFail("testMutlitpleMultiplication", &RESULT, resultPtr, resReadyPtr, 1);
  }
  // else{
  //   printPassFail("testMutlitpleMultiplication", &RESULT, resultPtr, resReadyPtr, 0);
  // }

  resetPtrs(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);

  return pass;
}
