/*
* 파일명: "22110700윤관우-2.cpp"
* 프로그램의 목적 및 기능:
*   1. 매개변수의 개수에 따라 반지름이 달라지는 Circle 클래스 구현
*   2. 주어진 반지름에 따라 면적 계산 및 출력
*   3. 객체 생성 시 반지름 출력
*   3. 출력 형식: (객체) 면적은 (area), 반지름 (radius) 원 생성
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 9월 17일
*/

#include <iostream>
using namespace std;

class Circle {
    public:
        int radius;
        Circle(); // 매개 변수 없는 생성자
        Circle(int r); // 매개 변수 있는 생성자
        Circle(int a, int b); // 매개 변수 2개 있는 생성자
        double getArea();
};

Circle::Circle() {
    radius = 1;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r) {
    radius = r;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int a, int b) {
    radius = a + b;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

double Circle::getArea() {
    return 3.14 * radius * radius;
}

int main()
{
    Circle donut; // 매개 변수 없는 생성자 호출
    double area = donut.getArea();
    cout << "donut 면적은 " << area << endl;

    Circle pizza(30); // 매개 변수 있는 생성자 호출
    area = pizza.getArea();
    cout << "pizza 면적은 " << area << endl;

    Circle mycircle(5, 6); // 매개 변수 2개 있는 생성자 호출
    area = mycircle.getArea();
    cout << "mycircle 면적은" << area << endl;
}