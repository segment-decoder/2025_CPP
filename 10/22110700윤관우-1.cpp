/*
* 파일명: "22110700윤관우-1.cpp"
* 프로그램의 목적 및 기능:
* 	1. Base, Derived, GrandDerived 순의 클래스 반복 상속에서 가상 함수 동적 바인딩 구현
* 	2. GrandDerived 를 상속받는 MyDerived 파생 클래스에서 가상 함수 f()를 정의하고 MyDerived의 함수 f()가 호출되도록 추가
* 	3. 출력 형식: (클래스)::f() called
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 11월 12일
*/

#include <iostream>
using namespace std;

class Base {
public:
	virtual void f() { cout << "Base::f() called" << endl; }
};

class Derived : public Base {
public:
	void f() { cout << "Derived::f() called" << endl; }
};

class GrandDerived : public Derived {
public:
	void f() { cout << "GrandDerived::f() called" << endl; }
};

class MyDerived : public GrandDerived {
public:
	void f() { cout << "MyDerived::f() called" << endl; }
};

int main() {
	GrandDerived g;
	Base *bp;
	Derived *dp;
	GrandDerived *gp;

	bp = dp = gp = &g;

	bp -> f();
	dp -> f();
	gp -> f();

	MyDerived m;
	MyDerived *mp;

	bp = dp = gp = mp = &m;

	bp -> f();
	dp -> f();
	gp -> f();
	mp -> f();
}