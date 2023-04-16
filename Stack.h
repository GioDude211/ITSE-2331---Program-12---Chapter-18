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
		stack.pop_front();
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