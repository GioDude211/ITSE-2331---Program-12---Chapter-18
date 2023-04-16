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
		std::getline(std::cin, enterInputUser);

		enterInputUserInt = stoi(enterInputUser);

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
		std::getline(std::cin, enterInputUser);

		enterInputUserInt = stoi(enterInputUser);

		//PUSH STACK
		if (enterInputUserInt == 1) {
			std::cout << "Pushing Stack..." << std::endl;
			std::getline(std::cin, enterInputUser);

			stackInt.push(stoi(enterInputUser));


		}

		//POP STACK
		else if (enterInputUserInt == 2) {
			std::cout << "Popping Stack..." << std::endl;
			stackInt.pop();

		}
		//TOP STACK
		else if (enterInputUserInt == 3) {
			std::cout << "Top of Stack..." << std::endl;
			stackInt.top();
		}

		//CLEAR STACK
		else if (enterInputUserInt == 4) {
			
			std::cout << "Clearing Stack..." << std::endl;

			stackInt.clear();

		}

		//EMPTY STACK
		else if (enterInputUserInt == 5) {
			std::cout << "Checking if Stack is Empty..." << std::endl;
			
			if (!stackInt.isEmpty()) {
				std::cout << "Int Stack is NOT empty" << std::endl;
			}

			else {
				std::cout << "Int Stack is empty" << std::endl;
			}

		}
		//EXIT 
		else {
			std::cout << "EXITING INT STACK OPERATIONS..." << std::endl;
			exitOuterLoop = true;
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
		std::getline(std::cin, enterInputUser);

		enterInputUserInt = stoi(enterInputUser);

		//PUSH STACK
		if (enterInputUserInt == 1) {
			std::cout << "Pushing Stack..." << std::endl;
			std::getline(std::cin, enterInputUser);

			stackDouble.push(std::stod(enterInputUser));


		}

		//POP STACK
		else if (enterInputUserInt == 2) {
			std::cout << "Popping Stack..." << std::endl;
			stackDouble.pop();

		}
		//TOP STACK
		else if (enterInputUserInt == 3) {
			std::cout << "Top of Stack..." << std::endl;
			stackDouble.top();
		}

		//CLEAR STACK
		else if (enterInputUserInt == 4) {

			std::cout << "Clearing Stack..." << std::endl;

			stackDouble.clear();

		}

		//EMPTY STACK
		else if (enterInputUserInt == 5) {
			std::cout << "Checking if Stack is Empty..." << std::endl;

			if (!stackDouble.isEmpty()) {
				std::cout << "Double Stack is NOT empty" << std::endl;
			}

			else {
				std::cout << "Double Stack is empty" << std::endl;
			}

		}
		//EXIT 
		else {
			std::cout << "EXITING DOUBLE STACK OPERATIONS..." << std::endl;
			exitOuterLoop = true;
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
		std::getline(std::cin, enterInputUser);

		enterInputUserInt = stoi(enterInputUser);

		//PUSH STACK
		if (enterInputUserInt == 1) {
			std::cout << "Pushing Stack..." << std::endl;
			std::getline(std::cin, enterInputUser);

			stackStr.push(enterInputUser);


		}

		//POP STACK
		else if (enterInputUserInt == 2) {
			std::cout << "Popping Stack..." << std::endl;
			stackStr.pop();

		}
		//TOP STACK
		else if (enterInputUserInt == 3) {
			std::cout << "Top of Stack..." << std::endl;
			stackStr.top();
		}

		//CLEAR STACK
		else if (enterInputUserInt == 4) {

			std::cout << "Clearing Stack..." << std::endl;

			stackStr.clear();

		}

		//EMPTY STACK
		else if (enterInputUserInt == 5) {
			std::cout << "Checking if Stack is Empty..." << std::endl;

			if (!stackStr.isEmpty()) {
				std::cout << "String Stack is NOT empty" << std::endl;
			}

			else {
				std::cout << "String Stack is empty" << std::endl;
			}

		}
		//EXIT 
		else {
			std::cout << "EXITING STRING STACK OPERATIONS..." << std::endl;
			exitOuterLoop = true;
		}

	} while (exitOuterLoop != true);
}