// testSub.cpp
#include "testSub.h"

#include "testCalculator.h"

bool testSingleSubtraction(double *num1Ptr, double *num2Ptr, double *resultPtr, char *mathOpPtr, bool *resReadyPtr) {
  bool pass = 0;
  const double RESULT = 1.00;

  setupOp(num1Ptr, num2Ptr, mathOpPtr, 3.00, 2.00, '-');

  if(*resultPtr == RESULT && *resReadyPtr == 1){
    pass = 1;
    // printPassFail("testSingleSubtraction", &RESULT, resultPtr, resReadyPtr, 1);
  }
  // else{
  //   printPassFail("testSingleSubtraction", &RESULT, resultPtr, resReadyPtr, 0);
  // }

  resetPtrs(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);

  return pass;
}

bool testSevenDigSubtraction(double *num1Ptr, double *num2Ptr, double *resultPtr, char *mathOpPtr, bool *resReadyPtr) {
  bool pass = 0;
  const double RESULT = 100000000.00;

  setupOp(num1Ptr, num2Ptr, mathOpPtr, 300000000.00, 200000000.00, '-');

  if(*resultPtr == RESULT && *resReadyPtr == 1){
    pass = 1;
    // printPassFail("testSevenDigSubtraction", &RESULT, resultPtr, resReadyPtr, 1);
  }
  // else{
  //   printPassFail("testSevenDigSubtraction", &RESULT, resultPtr, resReadyPtr, 0);
  // }

  resetPtrs(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);

  return pass;
}

bool testDecimalSubtraction(double *num1Ptr, double *num2Ptr, double *resultPtr, char *mathOpPtr, bool *resReadyPtr) {
  bool pass = 0;
  const double RESULT = 10.12;

  setupOp(num1Ptr, num2Ptr, mathOpPtr, 20.25, 10.13, '-');

  if(*resultPtr == RESULT && *resReadyPtr == 1){
    pass = 1;
    // printPassFail("testDecimalSubtraction", &RESULT, resultPtr, resReadyPtr, 1);
  }
  // else{
  //   printPassFail("testDecimalSubtraction", &RESULT, resultPtr, resReadyPtr, 0);
  // }

  resetPtrs(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);

  return pass;
}

bool testNegativeSubtraction(double *num1Ptr, double *num2Ptr, double *resultPtr, char *mathOpPtr, bool *resReadyPtr) {
  bool pass = 0;
  const double RESULT = -10.00;

  setupOp(num1Ptr, num2Ptr, mathOpPtr, 20.00, 30.00, '-');

  if(*resultPtr == RESULT && *resReadyPtr == 1){
    pass = 1;
    // printPassFail("testNegativeSubtraction", &RESULT, resultPtr, resReadyPtr, 1);
  }
  // else{
  //   printPassFail("testNegativeSubtraction", &RESULT, resultPtr, resReadyPtr, 0);
  // }

  resetPtrs(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);

  return pass;
}

bool testMutlitpleSubtraction(double *num1Ptr, double *num2Ptr, double *resultPtr, char *mathOpPtr, bool *resReadyPtr) {
  bool pass = 0;
  const double RESULT = 5.00;

  setupMultipleOp(num1Ptr, num2Ptr, mathOpPtr, resultPtr, 15.00, 5.00, 5.00, '-');

  if(*resultPtr == RESULT && *resReadyPtr == 1){
    pass = 1;
    // printPassFail("testMutlitpleSubtraction", &RESULT, resultPtr, resReadyPtr, 1);
  }
  // else{
  //   printPassFail("testMutlitpleSubtraction", &RESULT, resultPtr, resReadyPtr, 0);
  // }

  resetPtrs(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);

  return pass;
}
