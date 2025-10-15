/*
* 파일명: "22110700윤관우-2.cpp"
* 프로그램의 목적 및 기능:
* 	1. 매개변수 1로 받은 문자를 10개씩 출력, 매개변수 2만큼 줄 바꿔 반복하는 함수 구현
*	2. 매개변수를 지정하지 않았을 때 한 줄에 '~'를 10개 출력하도록 수정
* 	3. 출력 형식: (지정된 문자 x 10)endl x (매개변수 2)
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 10월 15일
*/

#include <iostream>
using namespace std;

void f(char c = '~', int line = 1);

void f(char c, int line)
{
	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < 10; j++)
			cout << c;
		cout << endl;
	}
}

int main()
{
	f();
	f('%');
	f('@', 5);
}