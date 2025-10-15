/*
* 파일명: "22110700윤관우-1.cpp"
* 프로그램의 목적 및 기능:
*   1. 객체의 반지름을 설정하고 면적을 계산하는 Circle 클래스 구현
*   2. 객체에 지름 계산 기능 추가
*   3. 출력 형식: (객체) 면적은 (area), (객체) 지름은 (diameter)
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 9월 17일
*/

#include <iostream>
using namespace std;

class Circle {
    public:
        int radius;
        double getArea();
        double getDiameter();
};

double Circle::getArea() {
    return 3.14 * radius * radius;
}

double Circle::getDiameter() {
    return 2 * radius;
}

int main()
{
    Circle donut;
    donut.radius = 1; // donut 객체의 반지름을 1로 설정
    double area = donut.getArea(); // donut 객체의 면적 알아내기
    double diameter = donut.getDiameter(); // donut 객체의 지름 알아내기
    cout << "donut 면적은 " << area << endl;
    cout << "donut 지름은 " << diameter << endl;

    Circle pizza;
    pizza.radius = 30; // pizza 객체의 반지름을 30으로 설정
    area = pizza.getArea(); // pizza 객체의 면적 알아내기
    diameter = pizza.getDiameter(); // pizza 객체의 지름 알아내기
    cout << "pizza 면적은 " << area << endl;
    cout << "pizza 지름은 " << diameter << endl;
}