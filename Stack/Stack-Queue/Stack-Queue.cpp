// Stack-Queue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Christopher Miller C++ Programmer
//Homework 12 Stack/Queue Adapter Class

#include <iostream>

#include "Header.h"


Stack::Stack()
    :d()
{
    //Nothing Here
}

Stack::Stack(const Stack& rhs)
    : d(rhs.d)
{
    //Nothing Here
}

Stack& Stack::operator=(const Stack& rhs)
{
    d = rhs.d;
    return *this;
}

bool Stack::empty()
{
    return d.empty();
}

void Stack::pop()
{
    d.pop_back();
}

void Stack::push(double value)
{
    d.push_back(value);
}

int Stack::size()
{
    return d.size();
}

void Stack::swap(Stack& rhs)
{
    std::swap(d, rhs.d);
}

double Stack::top()
{
    return d.back();
}


int main()
{
    Stack a;
    std::cout << "Hello World!\n";
}

