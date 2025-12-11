/*
* 파일명: "22110700윤관우-2.cpp"
* 프로그램의 목적 및 기능:
* 	1. 예외 처리를 포함한 스택 구조를 가진 클래스 MyStack의 멤버 함수 push(), pop() 작성
* 	2. push(200)시 예외 처리하여 출력하도록 push 함수 수정
* 	3. 출력 형식: (스택 값) / 예외 발생 : (throw된 값)
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 12월 11일
*/

#include "22110700윤관우-2_MyStack.h"

void MyStack::push(int n) {
	if (tos == 99)
		throw "Stack Full";
	if (n == 200)
		throw "200이 푸쉬되었음";
	tos++;
	data[tos] = n;
}

int MyStack::pop() {
	if (tos == -1)
		throw "Stack Empty";
	int rData = data[tos--];
	return rData;
}