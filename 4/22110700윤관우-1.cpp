/*
* 파일명: "22110700윤관우-1.cpp"
* 프로그램의 목적 및 기능:
*   1. Circle 객체 배열을 생성하고 초기화 및 면적 반환
*   2. 매개변수가 0, 1, 2개인 생성자를 배열 선언에서 호출
*   3. 출력 형식: Circle (i)의 면적은 (반지름)
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 9월 24일
*/

#include <iostream>
using namespace std;

class Circle
{
    int radius;
public:
    Circle() {radius = 1;}
    Circle(int r) {radius = r;}
    Circle(int a, int b) {radius = a + b;}
    void setRadius(int r) {radius = r;}
    double getArea();
};

double Circle::getArea()
{
    return 3.14 * radius * radius;
}

int main()
{
    Circle circleArray[4] = {Circle(10), Circle(20), Circle(1), Circle(1, 2)};

    for (int i = 0; i < 4; i++)
        cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
}