/*
* 파일명: "22110700_윤관우-1.cpp"
* 프로그램의 목적 및 기능:
* 	1. 2차원 평면에서 한 점을 표현하는 클래스 Point 선언
* 	2. 점의 색을 표현하는 상속 클래스 ColorPoint 선언
* 	3. 출력 형식: (x, y) / color:(x, y)
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 11월 05일
*/

#include <iostream>
#include <string>
using namespace std;

class Point {
	int x, y;
public:
	void set(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void showPoint() {
		cout << "(" << x << ", " << y << ")";
	}
};

class ColorPoint : public Point {
	string color;
public:
	void setColor(string color) {
		this->color = color;
	}
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint();
}

int main() {
	Point p;
	ColorPoint cp;
	cp.set(3, 4);
	cp.setColor("Red");
	cp.showColorPoint();
	cp.showPoint();
}