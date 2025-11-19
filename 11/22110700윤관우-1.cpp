/*
* 파일명: "22110700윤관우-1.cpp"
* 프로그램의 목적 및 기능:
* 	1. 두 값을 매개 변수로 받아 큰 값을 리턴하는 제네릭 함수 bigger() 작성
* 	2. 두 값을 매개 변수로 받아 작은 값을 리턴하는 제네릭 함수 smaller()를 추가 및 출력
* 	3. 출력 형식: bigger(변수1, 변수2)의 결과는 (return) / smaller(변수1, 변수2)의 결과는 (return)
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 11월 19일
*/

#include <iostream>
using namespace std;

template <class T>
T bigger(T a, T b)
{
	if (a > b)
		return a;
	else
		return b;
}

template <class T>
T smaller(T a, T b)
{
	if (a > b)
		return b;
	else
		return a;
}


int main()
{
	int a = 20, b = 50;
	char c = 'a', d = 'z';
	cout << "bigger(20, 50)의 결과는 " << bigger(a, b) << endl;
	cout << "bigger('a', 'z')의 결과는 " << bigger(c, d) << endl;
	a = 2, b = 3;
	float e = 1.2, f = 2.3;
	d = 'c';
	cout << "smaller(2, 3)의 결과는 " << smaller(a, b) << endl;
	cout << "smaller(1.2, 2.3)의 결과는 " << smaller(e, f) << endl;
	cout << "smaller('a', 'c')의 결과는 " << smaller(c, d) << endl;
}