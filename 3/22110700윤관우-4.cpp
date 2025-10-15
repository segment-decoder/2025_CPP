/*
* 파일명: "22110700윤관우-4.cpp"
* 프로그램의 목적 및 기능:
*   1. Circle 객체의 생성과 소멸 시 반지름과 함께 생성, 소멸 알림 출력
*   2. Rectangle 객체의 생성과 소멸 시 매개 변수와 함께 생성, 소멸 알림 출력
*   2. 출력 형식 : 반지름 (매개변수) 원 생성, 반지름 (매개변수) 원 소멸
*               사각형 (매개변수) (매개변수) 생성, 사각형 (매개변수) (매개변수) 소멸
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 9월 17일
*/

#include <iostream>
using namespace std;

class Circle
{
    public:
        int radius;

        Circle(); // 매개 변수 없는 생성자
        Circle(int r); // 매개 변수 있는 생성자
        ~Circle(); // 소멸자
        double getArea();
};

class Rectangle
{
    public:
        int width, height;

        Rectangle(); // 매개 변수 없는 생성자
        Rectangle(int length); // 매개 변수 있는 생성자
        Rectangle(int w, int h); // 매개 변수 2개 있는 생성자
        ~Rectangle(); // 소멸자
};

Circle::Circle()
{
    radius = 1;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r)
{
    radius = r;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::~Circle()
{
    cout << "반지름 " << radius << " 원 소멸" << endl;
}

double Circle::getArea()
{
    return 3.14 * radius * radius;
}

Rectangle::Rectangle()
{
    width = height = 1;
    cout << "사각형 " << width << " " << height << " 생성" << endl;
}

Rectangle::Rectangle(int length)
{
    width = height = length;
    cout << "사각형 " << width << " " << height << " 생성" << endl;
}

Rectangle::Rectangle(int w, int h)
{
    width = w; height = h;
    cout << "사각형 " << width << " " << height << " 생성" << endl;
}

Rectangle::~Rectangle()
{
    cout << "사각형 " << width << " " << height << " 소멸" << endl;
}

Circle globalDonut(1000);
Circle globalPizza(2000);

void f()
{
    Circle fDonut(100);
    Circle fPizza(200);
}

int main()
{
    Circle mainDonut;
    Circle mainPizza(30);
    f();
    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(3);
}