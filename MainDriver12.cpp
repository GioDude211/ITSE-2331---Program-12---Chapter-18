#include <iostream>
#include <string>
#include "Stack.h"



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
	bool exitOuterLoop = false;
	std:: string enterInputUser;
	int enterInputUserInt = 0;

	Stack<double> doubleStack; //Create a Stack of double
	


	do {
		std::cout << "Select an Operation to perform: " << std::endl;
		std::cout << "1 - Push" << std::endl;
		std::cout << "2 - Pop" << std::endl;
		std::cout << "3 - Top" << std::endl;
		std::cout << "4 - Clear" << std::endl;
		std::cout << "5 - Empty" << std::endl;
		std::getline(std::cin, enterInputUser);

		enterInputUserInt = stoi(enterInputUser);

//PUSH STACK
		if (enterInputUserInt == 1) {
			
		}

//POP STACK
		else if (enterInputUserInt == 2) {

		}




	} while (exitOuterLoop != true);
	

	

	return 0;
}