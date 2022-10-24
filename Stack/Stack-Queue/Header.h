#pragma once

#include <deque>

class Stack
{
public:
	Stack();
	

	Stack(const Stack& rhs);

	Stack& operator =(const Stack& rhs);


	bool empty();
	void pop();
	void push(double value);
	int size();
	void swap(Stack& rhs);
	double top();


private:

	std::deque<double> d;

};