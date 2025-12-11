#ifndef MYSTACK_H
#define MYSTACK_H

class MyStack {
	int data[100];
	int tos;
public:
	MyStack() { tos = -1; }
	void push(int n); // ISO C++17 does not allow dynamic exception specifications : void push(int n) throw(char*);
	int pop(); // ISO C++17 does not allow dynamic exception specifications : int pop() throw(char*);
};

#endif