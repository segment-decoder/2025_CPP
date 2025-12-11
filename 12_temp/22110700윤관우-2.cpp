/*
* 파일명: "22110700윤관우-2.cpp"
* 프로그램의 목적 및 기능:
* 	1. Point 객체를 입력 받는 >> 연산자와 출력하는 << 연산자 작성
* 	2. int 멤버변수가 3개 있는 MyPoint 클래스 추가, 연산자로 멤버변수 입출력하는 부분 추가
* 	3. 입력 형식: x 좌표>> / y 좌표>> / z 좌표>>
* 	4. 출력 형식: (x, y) / (x, y, z)
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 11월 26일
*/

#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}
	friend istream& operator>>(istream& ins, Point &a);
	friend ostream& operator<<(ostream& stream, Point a);
};

class MyPoint {
	int x, y, z;
public:
	MyPoint(int x = 0, int y = 0, int z = 0) {
		this->x = x;
		this->y = y;
		this->z = z;
	}
	friend istream& operator>>(istream& ins, MyPoint &a);
	friend ostream& operator<<(ostream& stream, MyPoint a);
};

istream& operator>>(istream& ins, Point &a) {
	cout << "x 좌표>>";
	ins >> a.x;
	cout << "y 좌표>>";
	ins >> a.y;
	return ins;
}

ostream& operator<<(ostream& stream, Point a) {
	stream << "(" << a.x << ", " << a.y << ")";
	return stream;
}

istream& operator>>(istream& ins, MyPoint &a) {
	cout << "x 좌표>>";
	ins >> a.x;
	cout << "y 좌표>>";
	ins >> a.y;
	cout << "z 좌표>>";
	ins >> a.z;
	return ins;
}

ostream& operator<<(ostream& stream, MyPoint a) {
	stream << "(" << a.x << ", " << a.y << ", " << a.z << ")";
	return stream;
}

int main() {
	Point p;
	cin >> p;
	cout << p;
	cout << endl;

	MyPoint mp;
	cin >> mp;
	cout << mp;
}