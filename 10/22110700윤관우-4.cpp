/*
* 파일명: "22110700윤관우-4.cpp"
* 프로그램의 목적 및 기능:
* 	1. ANDGate, ORGate, XORGate 클래스가 AbstractGate를 상속받도록 구현 (ANDGate, ORGate, XORGate 클래스는 논리회로의 AND, OR, XOR로 동작)
* 	2. 추상 클래스와 순수 가상 함수를 활용하여 구현
* 	3. 출력 형식: true / false
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 11월 12일
*/

#include <iostream>
using namespace std;

class AbstractGate { // 추상 클래스
protected:
	bool x, y;
public:
	void set(bool x, bool y) { this->x = x; this->y = y; }
	virtual bool operation()=0; // 순수 가상 함수
};

class ANDGate : public AbstractGate {
public:
	virtual bool operation() {
		if (x == y == true)
			return (true);
		else
			return (false);
	}
};

class ORGate : public AbstractGate {
public:
	virtual bool operation() {
		if (x == true || y == true)
			return (true);
		else
			return (false);
	}
};

class XORGate : public AbstractGate {
public:
	virtual bool operation() {
		if (x == y)
			return (false);
		else
			return (true);
	}
};

int main() {
	ANDGate andGate;
	ORGate orGate;
	XORGate xorGate;
	andGate.set(true, false);
	orGate.set(true, false);
	xorGate.set(true, false);
	cout.setf(ios::boolalpha); // 불린 값을 "true', "false" 문자열로 출력할 것을 지시
	cout << andGate.operation() << endl; // AND 결과는 false
	cout << orGate.operation() << endl; // OR 결과는 true
	cout << xorGate.operation() << endl; // XOR 결과는 true
}