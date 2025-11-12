/*
* 파일명: "22110700윤관우-2.cpp"
* 프로그램의 목적 및 기능:
* 	1. Base와 그를 상속받는 Derived 클래스에서 소멸자를 가상 함수로 선언
* 	2. Derived 를 상속받는 MyDerived 클래스에서 소멸자를 가상함수로 선언하고 main에서 소멸자 실행순서 확인
* 	3. 출력 형식: ~(클래스)()
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 11월 12일
*/

#include <iostream>
using namespace std;

class Base {
public:
	virtual ~Base() { cout << "~Base()" << endl; }
};

class Derived : public Base {
public:
	virtual ~Derived() { cout << "~Derived()" << endl; }
};

class MyDerived : public Derived {
public:
	virtual ~MyDerived() { cout << "~MyDerived()" << endl; }
};

int main() {
	MyDerived *mp = new MyDerived();
	Derived *dp = new MyDerived();
	Base *bp = new MyDerived();

	delete mp; // MyDerived의 포인터로 소멸
	delete dp; // Derived의 포인터로 소멸
	delete bp; // Base의 포인터로 소멸
}