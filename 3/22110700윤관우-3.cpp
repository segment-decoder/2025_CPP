/*
* 파일명: "22110700윤관우-3.cpp"
* 프로그램의 목적 및 기능:
*   1. 매개 변수의 개수에 따라 다른 사각형을 생성하는 Rectangle 클래스 구현
*   2. 생성된 객체에 대해 isSquare() 멤버 함수가 참일 경우 출력
*   3. 출력 형식: (객체)은 정사각형이다.
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 9월 17일
*/

#include <iostream>
using namespace std;

class Rectangle
{
    public:
        int width, height;

        Rectangle(); // 매개 변수 없는 생성자
        Rectangle(int length); // 매개 변수 있는 생성자
        Rectangle(int w, int h); // 매개 변수 2개 있는 생성자
        Rectangle(int a, int b, int h); // 매개 변수 3개 있는 생성자
        bool isSquare();
};

Rectangle::Rectangle()
{
    width = height = 1;
}

Rectangle::Rectangle(int length)
{
    width = height = length;
}

Rectangle::Rectangle(int w, int h)
{
    width = w; height = h;
}

Rectangle::Rectangle(int a, int b, int h)
{
    width = a + b;
    height = h;
}

bool Rectangle::isSquare()
{
    if (width == height) return true;
    else return false;
}

int main()
{
    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(3);
    Rectangle rect4(3, 5, 8);

    if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
    if (rect2.isSquare()) cout << "rect2은 정사각형이다." << endl;
    if (rect3.isSquare()) cout << "rect3은 정사각형이다." << endl;
    if (rect4.isSquare()) cout << "rect4은 정사각형이다." << endl;
}