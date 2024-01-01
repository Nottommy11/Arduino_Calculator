/******************************************
 * @file main.cpp
 * @author Thomas Marxsen
 * @date 2023-12-31
 * @version 0.8
 * @contact thomas.marxsen11@gmail.com
 *
 * @description
 * This program was written for the Arduino Uno.
 * It is a simple calculator that can add, subtract, multiply, and divide.
 * It can also handle decimals.
 * Input is done through a (custom) button matrix and output is displayed on an OLED display.
 *
 *
 * RESOURCES:
 * https://youtu.be/U2JI582V5xk?si=5sF2xEcBA0avYIkP
 * https://www.youtube.com/watch?v=lwY6NLT0krA&t=762s
 *
 *
 * The following components are plug-and-play components that can be used on a breadboard.
 *
 * BREADBOARD PROTOTYPE COMPONENTS USED:
 * Display x1: https://www.amazon.com/gp/product/B09MZ8DW4R/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&th=1
 * Arduino Uno R3 x1: https://www.elegoo.com/products/elegoo-uno-r3-board
 * 4x4 Button Matrix x1: https://www.amazon.com/Matrix-Buttons-Keyboard-Arduino-Raspberry/dp/B08QDHRTTY/ref=sr_1_5?crid=WX3HUD8LB6X&keywords=4x4+button+matrix+arduino&qid=1704011919&sprefix=4x4+button+matrix+arduino%2Caps%2C87&sr=8-5
 * Breadboard x1: https://www.amazon.com/EL-CP-003-Breadboard-Solderless-Distribution-Connecting/dp/B01EV6LJ7G/ref=sr_1_5?crid=2C9B7VGC9Y5ZP&keywords=arduino+breadboard&qid=1704011989&sprefix=arduino+breadboard%2Caps%2C103&sr=8-5
 *
 *
 * TODO: ADD COMPONENTS FOR BUTTON ON/OFF SWITCH
 *
 * The following components are through-hole components that can be soldered onto a prototyping board.
 *
 * PROTOTYPING BOARD COMPONENTS USED:
 * Display x1: https://www.amazon.com/gp/product/B09MZ8DW4R/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&th=1
 * ATMEGA328P x1 and Crystal Oscillator x1: https://www.amazon.com/gp/product/B071CQ2S9Q/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1
 * Prototyping Boards x1: https://www.amazon.com/gp/product/B072Z7Y19F/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1
 * Push Buttons x18: https://www.amazon.com/dp/B07QH9WV12/?coliid=I3Q80ZD2Z35X38&colid=1CHO0KZHI6UX9&psc=1&ref_=list_c_wl_lv_ov_lig_dp_it
 * 22 pF Capacitors x2 and 100 nF Capacitor x1: https://www.amazon.com/dp/B094HRK8QX/?coliid=I3JW5SWFK9EWZ3&colid=1CHO0KZHI6UX9&ref_=list_c_wl_lv_ov_lig_dp_it&th=1
 * 3.7V LiPo Battery x1: https://www.amazon.com/gp/product/B097BKNW7T/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1
 * Micro USB Battery Charger x1: https://www.amazon.com/gp/product/B06XCXPY86/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1
 * 10 kOhm Resistor x1: https://www.amazon.com/10K-Resistor-Tolerance-Resistors-Resistance/dp/B0B4JFPHTW/ref=sr_1_2_sspa?keywords=10k+ohm+resistor&qid=1704012670&sr=8-2-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&psc=1
 *
 *
 * The following components are surface mount components that can be soldered onto a custom designed PCB.
 *
 * CUSTOM PCB COMPONENTS USED:
 * Display x1: https://www.amazon.com/gp/product/B09MZ8DW4R/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&th=1
 * ATMEGA328P x1 and Crystal Oscillator x1: https://www.amazon.com/gp/product/B071CQ2S9Q/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1
 * Push Buttons x18: https://www.amazon.com/dp/B07QH9WV12/?coliid=I3Q80ZD2Z35X38&colid=1CHO0KZHI6UX9&psc=1&ref_=list_c_wl_lv_ov_lig_dp_it
 * 22 pF Capacitors x2 and 100 nF Capacitor x1: https://www.amazon.com/McIgIcM-36values20pcs-electronic-Multiplayer-Capacitors/dp/B06XDG3WQX/ref=sr_1_5?crid=2DHRZKN3841N9&keywords=surface+mount+capacitor+assortment&qid=1704013038&s=industrial&sprefix=surface+mount+capa%2Cindustrial%2C98&sr=1-5
 * 3.7V LiPo Battery x1: https://www.amazon.com/gp/product/B097BKNW7T/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1
 * Micro USB Battery Charger x1: https://www.amazon.com/gp/product/B06XCXPY86/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1
 * 10 kOhm Resistor x1: https://www.amazon.com/dp/B0B3JTM278/?coliid=I222IY80EZGLVY&colid=1CHO0KZHI6UX9&psc=1&ref_=list_c_wl_lv_ov_lig_dp_it
 * ******************************************/

#include <Keypad.h>

#include "calculator.h"
#include "display.h"

#include "testCalculator.h"

// Sets up the number of rows and columns for the button matrix
const byte ROWS = 4;
const byte COLS = 4;

// Sets up the keys associated with the button matrix
char hexaKeys[ROWS][COLS] = {
		{'1', '2', '3', '+'},
		{'4', '5', '6', '-'},
		{'7', '8', '9', 'C'},
		{'*', '0', '/', '='}};

// Sets up the pins associated with the button matrix
const byte ROW_PINS[] = {9, 8, 7, 6};
const byte COL_PINS[] = {5, 4, 3, 2};

// Initializes the keypad
Keypad customKeypad = Keypad(makeKeymap(hexaKeys), ROW_PINS, COL_PINS, ROWS, COLS);

char key;

double *num1Ptr = &Calculator::num1;
double *num2Ptr = &Calculator::num2;
double *resultPtr = &Calculator::result;
char *mathOpPtr = &Calculator::mathOp;
bool *resReadyPtr = &Calculator::resultReady;

void setup()
{
	Serial.begin(9600);

  // Testing seems to crash before it can setup the calculator, which is fine, its just for testing
  // Make sure to comment when not testing
  // testMain(num1Ptr, num2Ptr, resultPtr, mathOpPtr, resReadyPtr);

	initDisplay();
}

void loop()
{
	key = customKeypad.getKey();

	if (key)
	{
		switch (key)
		{
		// This case is for numbers 0-9
		case '0' ... '9':
			// If there is no math operation, then we are still on the first number
			if (*mathOpPtr == 'N')
			{
				// This pretty much casts the char to an int
				*num1Ptr = *num1Ptr * 10 + (key - '0');

				// Serial.println("Num1: " + String(*num1Ptr));

				printToDisplay(String(*num1Ptr, 2)); // Display with 2 decimal places
			}
			// If there is a math operation, then we are on the second number
			else
			{
				// This pretty much casts the char to an int
				*num2Ptr = *num2Ptr * 10 + (key - '0');

				// Serial.println("Num2: " + String(*num2Ptr));

				printToDisplay(String(*num2Ptr, 2)); // Display with 2 decimal places
			}
			break;
		case '+':
		case '-':
		case '*':
		case '/':
			// If there is already a math operation, then we need to calculate the result of the previous operation before moving on
			// This allows us to string together multiple operations on multiple numbers
			if (*mathOpPtr != 'N')
			{
				Calculator::calculate();
				*num1Ptr = *resultPtr;
				*num2Ptr = 0;
			}
			*mathOpPtr = key;

			// Serial.println("MathOp: " + String(*mathOpPtr));

			// If there is a result ready, then we need to display it before moving on
			if (*resReadyPtr)
			{
				printToDisplay(String(*resultPtr, 2)); // Display with 2 decimal places
				*resReadyPtr = false;
			}
			break;
		// Calculate the result and reset the variables, num1 is set to the result so an operation can be applied to the resulting number
		case '=':
			Calculator::calculate();
			*num1Ptr = *resultPtr;
			*num2Ptr = 0;
			printToDisplay(String(*resultPtr, 2)); // Display with 2 decimal places
			break;
		// 'C' is for clear, so clear all variables
		case 'C':
			*num1Ptr = 0;
			*num2Ptr = 0;
			*resultPtr = 0;
			*mathOpPtr = 'N';
			printToDisplay(String(0.00));
			break;
		// Hopefully this never happens
		default:
			printToDisplay("Error :(");
		}
	}
}
