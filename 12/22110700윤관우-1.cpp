/*
* 파일명: "22110700윤관우-1.cpp"
* 프로그램의 목적 및 기능:
* 	1. iostream 멤버 함수인 width(), fill(), precision()을 사용한 포맷 출력
* 	2. 11./3. 출력 부분의 필드 너비를 10칸, 필드의 빈칸을 ~로 채워서 출력하도록 수정
* 	3. 출력 형식: (fill * width)(input)
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 11월 26일
*/

#include <iostream>
using namespace std;

void showWidth() {
	cout.width(10);
	cout << "Hello" << endl;
	cout.width(5);
	cout << 12 << endl;

	cout << '%';
	cout.width(10);
	cout << "Korea/" << "Seoul/" << "City" << endl;
}

int main() {
	showWidth();
	cout << endl;

	cout.fill('^');
	showWidth();
	cout << endl;

	cout.precision(5);
	cout.width(10);
	cout.fill('~');
	cout << 11./3. << endl;
}