/*
* 파일명: "22110700윤관우-1.cpp"
* 프로그램의 목적 및 기능:
*   1. 한변의 길이가 n인 정사각형의 면적을 계산하여 출력
*   2. 출력형식: 면적은 (return)
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 9월 10일
*/

#include <iostream>

double area(int r); // 함수의 원형 선언
double square_area(int n); // 정사각형의 면적 계산 함수 원형 선언

double area(int r) // 함수 구현
{
    return 3.14 * r * r;
}

double square_area(int n) // 정사각형의 면적 계산 함수
{
    return n * n;
}

int main()
{
    int n = 3;
    char c = '#';
    std::cout << c << 5.5 << '-' << n << "hello" << true << std::endl;
    std::cout << "n + 5 = " << n + 5 << '\n';
    std::cout << "면적은 " << area(n); // 함수 area()의 리턴 값 출력
    std::cout << '\n' << "정사각형의 면적은 " << square_area(n); // 정사각형의 면적 출력

    return 0;
}