/*
* 파일명: "22110700윤관우-2.cpp"
* 프로그램의 목적 및 기능:
*	1. 이름을 문자열에 저장하고 출력
*	2. 이름에서 특정 인덱스의 글자를 대체하는 참조 함수 작성
*	3. 함수의 리턴값을 참조하여 글자 변경
*	4. 문자열의 길이를 참조 리턴하는 함수 int& length()를 추가, 문자열의 길이를 출력
*	5. 출력 형식: (name), 길이는 (len)
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 10월 1일
*/

#include <iostream>
using namespace std;

char& find(char s[], int index)
{
	return s[index];
}

int& length(char s[])
{
	int i;
	while (s[i])
		++i;
	return	i;
}

int main()
{
	char name[] = "Mike";
	int len = length(name);
	cout << name << endl;
	cout << "길이는" << len << endl;

	find(name, 0) = 'S';
	cout << name << endl;

	char& ref = find(name, 2);
	ref = 't';
	cout << name << endl;
}