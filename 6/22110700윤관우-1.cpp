/*
* 파일명: "22110700윤관우-1.cpp"
* 프로그램의 목적 및 기능:
* 	1. 일정 범위의 숫자 합을 구하는 중복 함수 2개 구현 (a~b, 0~a)
*	2. 네 개의 정수 매개변수인 경우 a~b, c~d를 구해 더한 값을 리턴하도록 중복 함수 추가
* 	3. 출력 형식: (함수 1 return)endl, (함수 2 return)endl, (함수 3 return)endl
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 10월 15일
*/

#include <iostream>
using namespace std;

int sum(int a, int b)
{
	int s = 0;
	for (int i = a; i <= b; i++)
		s += i;
	return s;
}

int sum(int a)
{
	int s = 0;
	for (int i = 0; i <= a; i++)
		s += i;
	return s;
}

int sum(int a, int b, int c, int d)
{
	int s = 0;
	for (int i = a; i <= b; i++)
		s += i;
	for (int j = c; j <= d; j++)
		s += j;
	return s;
}

int main()
{
	cout << sum(3, 5) << endl;
	cout << sum(3) << endl;
	cout << sum(100) << endl;
	cout << sum(3, 5, 7, 9) << endl;
}