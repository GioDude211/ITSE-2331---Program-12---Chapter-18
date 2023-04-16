#include <iostream>
#include <string>
#include "Stack.h"

//Prototypes
void manipulateStackInt(Stack<int> stackInt);
void manipulateStackDb(Stack<double> stackDouble);
void manipulateStackStr(Stack<std::string> stackStr);

//MAIN OBJECTIVES:
//ENABLE USER TO SELECT:
//1. Type of stack: int, double, string
//2.include member customer function templates:
//		push()
//		pop()
//		top()
//		clear()
//		empty()
// 
//LASTLY ENABLE catch exceptions thrown during stack operations.
// DO NOT EXIT, Notify and provide user to select another opportunity.	
//

int main() {
	
	bool exitOuterLoop1 = false;
	std:: string enterInputUser;
	int enterInputUserInt = 0;

	do {
		std::cout << "Select stack of the following types: " << std::endl;
		std::cout << "1 - Integer" << std::endl;
		std::cout << "2 - Double" << std::endl;
		std::cout << "3 - String" << std::endl;
		std::cout << "0 - Exit Program" << std::endl;

		try {
			std::getline(std::cin, enterInputUser);
			enterInputUserInt = stoi(enterInputUser);
		}

		catch (...) {
			std::cout << "Exception occured at the main function, invalid input by user." << std::endl;
		}

		

		if (enterInputUserInt == 1) {
			std::cout << "Creating Int Stack..." << std::endl;
			Stack<int> intStack; //create stack of int
			manipulateStackInt(intStack);
		}

		else if (enterInputUserInt == 2) {
			std::cout << "Creating Double Stack..." << std::endl;
			Stack<double> doubleStack; //create stack of double
			manipulateStackDb(doubleStack);
		}

		else if (enterInputUserInt == 3) {
			std::cout << "Creating String Stack..." << std::endl;
			Stack<std::string> strStack; //create a stack of string
			manipulateStackStr(strStack);
		}

		else  if (enterInputUserInt == 0) {
			std::cout << "Exit Program..." << std::endl;
			exitOuterLoop1 = true;
		}

		else{
			std::cout << "Invalid Input..." << std::endl;
		}
		
	} while (exitOuterLoop1 != true);
	
	return 0;
}

void manipulateStackInt(Stack<int> stackInt) {
	std::string enterInputUser;
	bool exitOuterLoop = false;
	int enterInputUserInt=0;

	int intValueIn = 0;

	std::cout << "Manipulating int stack..." << std::endl;

	do {
		std::cout << "Select an Operation to perform: " << std::endl;
		std::cout << "1 - Push" << std::endl;
		std::cout << "2 - Pop" << std::endl;
		std::cout << "3 - Top" << std::endl;
		std::cout << "4 - Clear" << std::endl;
		std::cout << "5 - Empty" << std::endl;
		std::cout << "0 - Exit" << std::endl;
		

		try {
			std::getline(std::cin, enterInputUser);
			enterInputUserInt = stoi(enterInputUser);
		}

		catch (...) {
			std::cout << "Exception occured at the manipulateStackInt function, invalid input by user." << std::endl;
		}
		

		//PUSH STACK
		if (enterInputUserInt == 1) {
			
			try {
				std::cout << "Pushing Stack..." << std::endl;
				std::getline(std::cin, enterInputUser);
				stackInt.push(stoi(enterInputUser));
			}

			catch(...){
				std::cout << "An exception occured at the main file for int stack push. Exception Nr." << std::endl;

			}

		}

		//POP STACK
		else if (enterInputUserInt == 2) {

			try {
				std::cout << "Popping Stack..." << std::endl;
				stackInt.pop();
			}
			
			catch (...) {
				std:: cout << "An exception occured at the main file for int stack pop." << std::endl;
			}

		}
		//TOP STACK
		else if (enterInputUserInt == 3) {
			try {
				std::cout << "Top of Stack..." << std::endl;
				stackInt.top();
			}
			catch (...) {
				std::cout << "An exception occured at the main file for int stack top." << std::endl;
			}
		}

		//CLEAR STACK
		else if (enterInputUserInt == 4) {
			
			try {
				std::cout << "Clearing Stack..." << std::endl;

				stackInt.clear();
			}

			catch (...) {
				std::cout << "An exception occured at the main file for the int stack clear." << std::endl;
			}
			

		}

		//EMPTY STACK
		else if (enterInputUserInt == 5) {

			try {
				std::cout << "Checking if Stack is Empty..." << std::endl;

				if (!stackInt.isEmpty()) {
					std::cout << "Int Stack is NOT empty" << std::endl;
				}

				else {
					std::cout << "Int Stack is empty" << std::endl;
				}
			}
			
			catch (...) {
				std::cout << "Exception occured at the main file for the int stack empty." << std::endl;
			}

		}
		//EXIT 
		else if (enterInputUserInt == 0) {
			std::cout << "EXITING INT STACK OPERATIONS..." << std::endl;
			exitOuterLoop = true;
		}

		else {
			std::cout << "INVALID INPUT..." << std::endl;
		}

	} while (exitOuterLoop != true);
}

void manipulateStackDb(Stack<double> stackDouble) {
	std::string enterInputUser;
	bool exitOuterLoop = false;
	int enterInputUserInt = 0;

	std::cout << "Manipulating Double stack..." << std::endl;

	do {
		std::cout << "Select an Operation to perform: " << std::endl;
		std::cout << "1 - Push" << std::endl;
		std::cout << "2 - Pop" << std::endl;
		std::cout << "3 - Top" << std::endl;
		std::cout << "4 - Clear" << std::endl;
		std::cout << "5 - Empty" << std::endl;
		std::cout << "0 - Exit" << std::endl;
		try {
			std::getline(std::cin, enterInputUser);
			enterInputUserInt = stoi(enterInputUser);
		}

		catch (...) {
			std::cout << "Exception occured at the manipulateStackDb function, invalid input by user." << std::endl;
		}


		//PUSH STACK
		if (enterInputUserInt == 1) {

			try {
				std::cout << "Pushing Stack..." << std::endl;
				std::getline(std::cin, enterInputUser);

				stackDouble.push(std::stod(enterInputUser));
			}
			catch (...) {
				std::cout << "Exception occured at the main file for the double stack push." << std::endl;
			}


		}

		//POP STACK
		else if (enterInputUserInt == 2) {

			try {
				std::cout << "Popping Stack..." << std::endl;
				stackDouble.pop();
			}
			
			catch(...){
				std::cout << "Exception occured at the main file for the double stack pop." << std::endl;
			}

		}
		//TOP STACK
		else if (enterInputUserInt == 3) {
			try {
				std::cout << "Top of Stack..." << std::endl;
				stackDouble.top();
			}

			catch (...) {
				std::cout << "Exception occured at the main file for the double stack top." << std::endl;
			}
			
		}

		//CLEAR STACK
		else if (enterInputUserInt == 4) {

			try {
				std::cout << "Clearing Stack..." << std::endl;

				stackDouble.clear();
			}
			
			catch (...) {
				std::cout << "Exception occured at the main file for the double stack clear." << std::endl;
			}

		}

		//EMPTY STACK
		else if (enterInputUserInt == 5) {

			try {
				std::cout << "Checking if Stack is Empty..." << std::endl;

				if (!stackDouble.isEmpty()) {
					std::cout << "Double Stack is NOT empty" << std::endl;
				}

				else {
					std::cout << "Double Stack is empty" << std::endl;
				}
			}
			
			catch (...) {
				std::cout << "Exception occured at the main file for the double stack empty check." << std::endl;
			}

		}
		//EXIT 
		else if(enterInputUserInt == 0) {
			std::cout << "EXITING DOUBLE STACK OPERATIONS..." << std::endl;
			exitOuterLoop = true;
		}

		else {
			std::cout << "INVALID INPUT..." << std::endl;
			}

	} while (exitOuterLoop != true);
}


void manipulateStackStr(Stack<std::string> stackStr) {
	std::string enterInputUser;
	bool exitOuterLoop = false;
	int enterInputUserInt = 0;

	std::cout << "Manipulating String Stack..." << std::endl;

	do {
		std::cout << "Select an Operation to perform: " << std::endl;
		std::cout << "1 - Push" << std::endl;
		std::cout << "2 - Pop" << std::endl;
		std::cout << "3 - Top" << std::endl;
		std::cout << "4 - Clear" << std::endl;
		std::cout << "5 - Empty" << std::endl;
		std::cout << "0 - Exit" << std::endl;
		try {
			std::getline(std::cin, enterInputUser);
			enterInputUserInt = stoi(enterInputUser);
		}

		catch (...) {
			std::cout << "Exception occured at the manipulateStackStr function, invalid input by user." << std::endl;

		}

		//PUSH STACK
		if (enterInputUserInt == 1) {

			try {
				std::cout << "Pushing Stack..." << std::endl;
				std::getline(std::cin, enterInputUser);

				stackStr.push(enterInputUser);
			}
			
			catch (...) {
				std::cout << "Exception occured at the main file for the string stack push." << std::endl;
			}

		}

		//POP STACK
		else if (enterInputUserInt == 2) {
			try {
				std::cout << "Popping Stack..." << std::endl;
				stackStr.pop();

			}

			catch (...) {
				std::cout << "Exception occured at the main file for the string stack pop." << std::endl;
			}
			
		}
		//TOP STACK
		else if (enterInputUserInt == 3) {
			try {
				std::cout << "Top of Stack..." << std::endl;
				stackStr.top();
			}

			catch (...) {
				std::cout << "Exception occured at the main file for the string stack top." << std::endl;
			}
		}

		//CLEAR STACK
		else if (enterInputUserInt == 4) {

			try {
				std::cout << "Clearing Stack..." << std::endl;

				stackStr.clear();

			}
			
			catch (...) {
				std::cout << "Exception occured at the main file for the string stack clear." << std::endl;
			}
		}

		//EMPTY STACK
		else if (enterInputUserInt == 5) {

			try {
				std::cout << "Checking if Stack is Empty..." << std::endl;

				if (!stackStr.isEmpty()) {
					std::cout << "String Stack is NOT empty" << std::endl;
				}

				else {
					std::cout << "String Stack is empty" << std::endl;
				}
			}

			catch (...) {
				std::cout << "Exception occured at the main file for the string stack Empty check." << std::endl;
			}

		}
		//EXIT 
		else if(enterInputUserInt == 0){
			std::cout << "EXITING STRING STACK OPERATIONS..." << std::endl;
			exitOuterLoop = true;
		}

		else {
			std::cout << "INVALID INPUT..." << std::endl;
		}

	} while (exitOuterLoop != true);
}