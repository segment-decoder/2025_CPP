/*
* 파일명: "22110700윤관우-3.cpp"
* 프로그램의 목적 및 기능:
* 	1. 후위 ++ 연산자 멤버 함수 구현
* 	2. 후위 -- 연산자 멤버 함수 구현
* 	3. 출력 형식: kick=(kick),punch=(punch)
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 10월 29일
*/

#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	void show();
	Power operator++(int x);
	Power operator--(int y);
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power Power::operator++(int x) {
	Power temp = *this;
	kick++;
	punch++;
	return temp;
}

Power Power::operator--(int y) {
	Power temp = *this;
	kick--;
	punch--;
	return temp;
}

int main() {
	Power a(3, 5), b;
	a.show();
	b.show();
	b = a++;
	a.show();
	b.show();
	b = a--;
	a.show();
	b.show();
}