/*
* 파일명: "22110700윤관우-4.cpp"
* 프로그램의 목적 및 기능:
* 	1. Circle 클래스를 완성하는 연산자 >>, << 작성
* 	2. 키보드 입력을 받아 반지름과 이름을 설정하고 출력
* 	3. 입력 형식: 반지름 >> / 이름 >>
* 	4. 출력 형식: (반지름(radius)인 (name))
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 11월 26일
*/

#include <iostream>
#include <string>
using namespace std;

class Circle {
	string name;
	int radius;
public:
	Circle(int radius=1, string name="") { 
	this->radius = radius; this->name = name;
	}
	friend ostream& operator << (ostream& outs, Circle c); // << 연산자를 프렌드로 선언
	friend istream& operator >> (istream& ins, Circle& c); // >> 연산자를 프렌드로 선언
};

ostream& operator << (ostream& outs, Circle c) {
	outs << "(반지름" << c.radius << "인 " << c.name << ")"; // 출력 형식에 맞게 출력
	return outs;
}

istream& operator >> (istream& ins, Circle& c) {
	cout << "반지름 >> ";
	ins >> c.radius; // 반지름 입력
	cout << "이름 >> ";
	ins >> c.name;   // 이름 입력
	return ins;
}

int main() {
	Circle d, w;
	cin >> d >> w; // 키보드 입력을 받아 객체 d와 w를 완성
	cout << d << w << endl; // 객체 d, w 출력
}