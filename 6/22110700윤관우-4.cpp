/*
* 파일명: "22110700윤관우-4.cpp"
* 프로그램의 목적 및 기능:
* 	1. 디폴트 매개변수를 가진 "하나의" big() 함수를 작성하고 프로그램을 완성하시오.
*	2. 매개변수 2개: 두 수 비교, 큰 값이 100보다 작으면 큰 수 출력, 100보다 크면 100 출력
*	3. 매개변수 3개: 앞의 두 수 비교, 큰 값이 매개변수 3보다 작으면 큰 수 출력, 매개변수 3보다 크면 매개변수 3 출력
* 	4. 출력 형식: (x) (y) (z)
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 10월 15일
*/

#include <iostream>
using namespace std;

int big(int a, int b, int comp = 100)
{
	int out = (a > b) ? a : b;
	if (out < comp) return out;
	else return comp;
}

int main()
{
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}