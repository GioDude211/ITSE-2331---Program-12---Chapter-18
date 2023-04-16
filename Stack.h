#pragma once
#ifndef STACK_H
#define STACK_H
#include <deque>

template <typename T>
class Stack {
public:
	const T& top() {
		return stack.front();
	}

	void push(const T& pushValue) {
		stack.push_front(pushValue);
			
		
	}

	void pop() {
		if (!stack.empty()) {
			stack.pop_front();
		}

		else {
			std::cout << "Unable to pop due to stack being empty." << std::endl;
		}
			
		
		
	}

	void clear() {
		
		while (!stack.empty()) {
			stack.pop_back();
		}
	
	}

	bool isEmpty() const {
		return stack.empty();
	}

	size_t size() const {
		return stack.size();
	}

private:
	std::deque<T> stack; //internal represntation of the Stack

};


#endif