// testCalculator.cpp
#include "testCalculator.h"

#include "setWidth.h"
#include "calculator.h"

#include "testAdd.h"
#include "testSub.h"
#include "testMul.h"
#include "testDiv.h"

void testMain(double *num1Ptr, double *num2Ptr, double *resultPtr, char *mathOpPtr, bool *resReadyPtr){
  bool pass;
  byte numFail = 0;

  printHeader();

  pass = testSingleAddition(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);
  printFunctInfo("testSingleAddition", pass);
  if(!pass){
    numFail++;
  }

  printSpacer();

  pass = testSevenDigAddition(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);
  printFunctInfo("testSevenDigAddition", pass);
  if(!pass){
    numFail++;
  }

  printSpacer();

  pass = testDecimalAddition(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);
  printFunctInfo("testDecimalAddition", pass);
  if(!pass){
    numFail++;
  }

  printSpacer();

  pass = testMutlitpleAddition(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);
  printFunctInfo("testMutlitpleAddition", pass);
  if(!pass){
    numFail++;
  }

  printSpacer();

  pass = testSingleSubtraction(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);
  printFunctInfo("testSingleSubtraction", pass);
  if(!pass){
    numFail++;
  }

  printSpacer();

  pass = testSevenDigSubtraction(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);
  printFunctInfo("testSevenDigSubtraction", pass);
  if(!pass){
    numFail++;
  }

  printSpacer();

  pass = testDecimalSubtraction(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);
  printFunctInfo("testDecimalSubtraction", pass);
  if(!pass){
    numFail++;
  }

  printSpacer();

  pass = testNegativeSubtraction(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);
  printFunctInfo("testNegativeSubtraction", pass);
  if(!pass){
    numFail++;
  }

  printSpacer();

  pass = testMutlitpleSubtraction(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);
  printFunctInfo("testMutlitpleSubtraction", pass);
  if(!pass){
    numFail++;
  }

  printSpacer();

  pass = testSingleMultiplication(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);
  printFunctInfo("testSingleMultiplication", pass);
  if(!pass){
    numFail++;
  }

  printSpacer();

  pass = testSevenDigMultiplication(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);
  printFunctInfo("testSevenDigMultiplication", pass);
  if(!pass){
    numFail++;
  }

  printSpacer();

  pass = testDecimalMultiplication(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);
  printFunctInfo("testDecimalMultiplication", pass);
  if(!pass){
    numFail++;
  }

  printSpacer();

  pass = testNegativeMultiplication(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);
  printFunctInfo("testNegativeMultiplication", pass);
  if(!pass){
    numFail++;
  }

  printSpacer();

  pass = testZeroMultiplication(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);
  printFunctInfo("testZeroMultiplication", pass);
  if(!pass){
    numFail++;
  }

  printSpacer();

  pass = testMutlitpleMultiplication(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);
  printFunctInfo("testMutlitpleMultiplication", pass);
  if(!pass){
    numFail++;
  }

  printSpacer();
  
  pass = testSingleDivision(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);
  printFunctInfo("testSingleDivision", pass);
  if(!pass){
    numFail++;
  }
  
  printSpacer();

  pass = testSevenDigDivision(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);
  printFunctInfo("testSevenDigDivision", pass);
  if(!pass){
    numFail++;
  }

  printSpacer();

  pass = testDecimalDivision(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);
  printFunctInfo("testDecimalDivision", pass);
  if(!pass){
    numFail++;
  }
  
  printSpacer();

  pass = testNegativeDivision(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);
  printFunctInfo("testNegativeDivision", pass);
  if(!pass){
    numFail++;
  }
  
  printSpacer();
  
  pass = testZeroDivision(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);
  printFunctInfo("testZeroDivision", pass);
  if(!pass){
    numFail++;
  }

  printSpacer();

  pass = testZeroErrorDivision(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);
  printFunctInfo("testZeroErrorDivision", pass);
  if(!pass){
    numFail++;
  }

  printSpacer();

  pass = testMutlitpleDivision(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);
  printFunctInfo("testMutlitpleDivision", pass);
  if(!pass){
    numFail++;
  }

  printSpacer();

  Serial.println("Number of Tests Failed: " + String(numFail));

  printSpacer();
}

void printHeader(){
  // I tried using setW instead, but it takes more memory than just printing these
  // Lmao mfw spaces take more memory than = chars, :|
  Serial.println("|                                                                |");
  Serial.println("|================================================================|");
  Serial.println("|                       ARDUINO CALCULATOR                       |");
  Serial.println("|================================================================|");
  Serial.println("|                                                                |");
  Serial.println("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|");
  Serial.println("|                      BEGINNING UNIT TESTS                      |");
  Serial.println("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|");
  Serial.println("|                               ||                               |");
}

void printSpacer(){
  Serial.println("|                               ||                               |");
  Serial.println("|===============================||===============================|");
  Serial.println("|                               ||                               |");
}

void printFunctInfo(char functName[], bool pass){
  String status = pass ? "Passed" : "Failed";

  Serial.print("| ");
  Serial.print(functName);
  setWRightStr("", (30 - String(functName).length()));
  Serial.print("||");
  setWRightStr("", (26 - 2));
  Serial.print(status);
  Serial.println(" |");
}

// void printPassFail(String functionName, double *result, double *resultPtr, bool *resReadyPtr, bool pass){
//   String status = pass ? "Passed" : "Failed";

//   Serial.print("| ");
//   Serial.print(functionName);
//   setWRightStr("", (30 - functionName.length()));
//   Serial.print("||");
//   setWRightStr("", (26 - 2));
//   Serial.print(status);
//   Serial.println(" |");

//   Serial.print("| Expected Result: ");
//   Serial.print(String(*result));
//   setWLeftStr("", (12 - String(*result).length()));
//   Serial.print(" || Got: ");
//   setWLeftStr("", (24 - String(*resultPtr).length()));
//   Serial.print(String(*resultPtr));
//   Serial.println(" |");

//   Serial.print("| Expected resReady: ");
//   setWLeftStr("1", 10);
//   Serial.print(" || Got: ");
//   setWLeftStr(String(*resReadyPtr), 24);
//   Serial.println(" |");
// }

void resetPtrs(double *num1Ptr, double *num2Ptr, double *resultPtr, char *mathOpPtr, bool *resReadyPtr){
  *num1Ptr = 0.00;
  *num2Ptr = 0.00;
  *mathOpPtr = 'N';
  *resultPtr = 0.00;
  *resReadyPtr = 0;
}

int setupOp(double *num1Ptr, double *num2Ptr, char *mathOpPtr, double num1, double num2, char mathOp){
  *num1Ptr = num1;
  *num2Ptr = num2;
  *mathOpPtr = mathOp;

  return Calculator::calculate();
}

void setupMultipleOp(double *num1Ptr, double *num2Ptr, char *mathOpPtr, double *resultPtr, double num1, double num2, double num3, char mathOp){
  *num1Ptr = num1;
  *num2Ptr = num2;
  *mathOpPtr = mathOp;

  Calculator::calculate();

  *mathOpPtr = mathOp;
  *num1Ptr = *resultPtr;
	*num2Ptr = num3;

  Calculator::calculate();
}
