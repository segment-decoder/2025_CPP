/*
* 파일명: "22110700윤관우-3.cpp"
* 프로그램의 목적 및 기능:
* 	1. static 함수를 가진 객체 구현
*	2. 클래스 멤버로서 함수를 호출, 객체를 하나 만들어 멤버 함수를 호출해 각각 출력.
* 	3. 출력 형식: (클래스 멤버 함수 return), (객체 멤버 함수 return)
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 10월 15일
*/

#include <iostream>
using namespace std;

class Math {
public:
	static int abs(int a) { return a > 0 ? a : -a; }
	static int max(int a, int b) { return (a > b) ? a : b; }
	static int min(int a, int b) { return (a > b) ? b : a; }
};

int main()
{
	cout << Math::abs(-5) << endl;
	cout << Math::max(10, 8) << endl;
	cout << Math::min(-3, -8) << endl;
	Math call;
	cout << call.abs(-5) << endl;
	cout << call.max(10, 8) << endl;
	cout << call.min(-3, -8) << endl;
}