/*
* 파일명: "22110700_윤관우-3.cpp"
* 프로그램의 목적 및 기능:
* 	1. Adder 클래스와 Subtractor 클래스를 다중 상속받는 Calculator 클래스 작성
* 	2. 두 수를 곱하는 Multiply 클래스를 추가하고 Calculator가 다중 상속 받도록 한다. 두 수를 곱한 값을 출력한다.
* 	3. 출력 형식: 2 + 4 = (return) / 100 - 8 = (return) / 3 * 4 = (return)
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 11월 5일
*/

#include <iostream>
using namespace std;

class Adder {
protected:
	int add(int a, int b) {
		return a + b;
	}
};

class Subtractor {
protected:
	int minus(int a, int b) {
		return a - b;
	}
};

class Multiply {
protected:
	int multiply(int a, int b) {
		return a * b;
	}
};

class Calculator : public Adder, public Subtractor, public Multiply {
public:
	int calc(char op, int a, int b);
};

int Calculator::calc(char op, int a, int b) {
	int res = 0;
	switch(op){
		case '+' : res = add(a, b); break;
		case '-' : res = minus(a, b); break;
		case '*' : res = multiply(a, b); break;
	}
	return res;
}

int main() {
	Calculator handCalculator;
	cout << "2 + 4 = " << handCalculator.calc('+', 2, 4) << endl;
	cout << "100 - 8 = " << handCalculator.calc('-', 100, 8) << endl;
	cout << "3 * 4 = " << handCalculator.calc('*', 3, 4) << endl;
}