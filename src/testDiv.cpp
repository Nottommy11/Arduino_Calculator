// testMul.cpp
#include "testMul.h"

#include "testCalculator.h"

bool testSingleDivision(double *num1Ptr, double *num2Ptr, double *resultPtr, char *mathOpPtr, bool *resReadyPtr) {
  bool pass = 0;
  const double RESULT = 4.00;

  setupOp(num1Ptr, num2Ptr, mathOpPtr, 8.00, 2.00, '/');

  if(*resultPtr == RESULT && *resReadyPtr == 1){
    pass = 1;
    // printPassFail("testSingleDivision", &RESULT, resultPtr, resReadyPtr, 1);
  }
  // else{
  //   printPassFail("testSingleDivision", &RESULT, resultPtr, resReadyPtr, 0);
  // }

  resetPtrs(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);

  return pass;
}

bool testSevenDigDivision(double *num1Ptr, double *num2Ptr, double *resultPtr, char *mathOpPtr, bool *resReadyPtr) {
  bool pass = 0;
  const double RESULT = 200000000.00;

  setupOp(num1Ptr, num2Ptr, mathOpPtr, 200000000.00, 1.00, '/');

  if(*resultPtr == RESULT && *resReadyPtr == 1){
    pass = 1;
    // printPassFail("testSevenDigDivision", &RESULT, resultPtr, resReadyPtr, 1);
  }
  // else{
  //   printPassFail("testSevenDigDivision", &RESULT, resultPtr, resReadyPtr, 0);
  // }

  resetPtrs(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);

  return pass;
}

bool testDecimalDivision(double *num1Ptr, double *num2Ptr, double *resultPtr, char *mathOpPtr, bool *resReadyPtr) {
  bool pass = 0;
  const double RESULT = 8.00;

  setupOp(num1Ptr, num2Ptr, mathOpPtr, 4.00, 0.50, '/');

  if(*resultPtr == RESULT && *resReadyPtr == 1){
    pass = 1;
    // printPassFail("testDecimalDivision", &RESULT, resultPtr, resReadyPtr, 1);
  }
  // else{
  //   printPassFail("testDecimalDivision", &RESULT, resultPtr, resReadyPtr, 0);
  // }

  resetPtrs(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);

  return pass;
}

bool testNegativeDivision(double *num1Ptr, double *num2Ptr, double *resultPtr, char *mathOpPtr, bool *resReadyPtr) {
  bool pass = 0;
  const double RESULT = -5.00;

  setupOp(num1Ptr, num2Ptr, mathOpPtr, -10.00, 2.00, '/');

  if(*resultPtr == RESULT && *resReadyPtr == 1){
    pass = 1;
    // printPassFail("testNegativeDivision", &RESULT, resultPtr, resReadyPtr, 1);
  }
  // else{
  //   printPassFail("testNegativeDivision", &RESULT, resultPtr, resReadyPtr, 0);
  // }

  resetPtrs(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);

  return pass;
}

bool testZeroDivision(double *num1Ptr, double *num2Ptr, double *resultPtr, char *mathOpPtr, bool *resReadyPtr) {
  bool pass = 0;
  const double RESULT = 0.00;

  setupOp(num1Ptr, num2Ptr, mathOpPtr, 0.00, 3.00, '/');

  if(*resultPtr == RESULT && *resReadyPtr == 1){
    pass = 1;
    // printPassFail("testZeroDivision", &RESULT, resultPtr, resReadyPtr, 1);
  }
  // else{
  //   printPassFail("testZeroDivision", &RESULT, resultPtr, resReadyPtr, 0);
  // }

  resetPtrs(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);

  return pass;
}

bool testZeroErrorDivision(double *num1Ptr, double *num2Ptr, double *resultPtr, char *mathOpPtr, bool *resReadyPtr) {
  bool pass = 0;
  bool error = 1;

  error = setupOp(num1Ptr, num2Ptr, mathOpPtr, 3.00, 0.00, '/');

  if(!error){
    pass = 1;
    // printPassFail("testZeroErrorDivision", &RESULT, resultPtr, resReadyPtr, 1);
  }
  // else{
  //   printPassFail("testZeroErrorDivision", &RESULT, resultPtr, resReadyPtr, 0);
  // }

  resetPtrs(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);

  return pass;
}

bool testMutlitpleDivision(double *num1Ptr, double *num2Ptr, double *resultPtr, char *mathOpPtr, bool *resReadyPtr) {
  bool pass = 0;
  const double RESULT = 5.00;

  setupMultipleOp(num1Ptr, num2Ptr, mathOpPtr, resultPtr, 125.00, 5.00, 5.00, '/');

  if(*resultPtr == RESULT && *resReadyPtr == 1){
    pass = 1;
    // printPassFail("testMutlitpleDivision", &RESULT, resultPtr, resReadyPtr, 1);
  }
  // else{
  //   printPassFail("testMutlitpleDivision", &RESULT, resultPtr, resReadyPtr, 0);
  // }

  resetPtrs(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);

  return pass;
}
