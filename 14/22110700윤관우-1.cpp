/*
* 파일명: "22110700윤관우-1.cpp"
* 프로그램의 목적 및 기능:
* 	1. 문자열을 정수로 변환하는 stringToint() 함수 구현 및 예외 처리
* 	2. 대문자를 소문자로 변환하는 함수를 추가 및 예외 처리
* 	3. 출력 형식: "(변환 전 문자열)"은 정수 (변환 된 정수)로 변환됨 / (변환 전 문자열)처리에서 예외 발생!! / "(변환 전 문자열)"은 소문자 "(변환 된 문자열)"로 변환됨
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 12월 11일
*/

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int stringToint(const char x[]) {
	int sum = 0;
	int len = strlen(x);
	for (int i = 0; i < len; i++) {
		if (x[i] >= '0' && x[i] <= '9')
			sum = sum * 10 + x[i] - '0';
		else
			throw x;
	}
	return sum;
}

string strlower(const char x[]) {
	if (x == nullptr)
		throw "nullptr";
	string s = x;
	int len = strlen(x);
	for (int i = 0; i < len; i++) {
		if (x[i] >= 'A' && x[i] <= 'Z')
			s[i] = x[i] + ('a' - 'A');
		else
			throw x;
	}
	return s;
}

int main() {
	int n;
	try {
		n = stringToint("123");
		cout << "\"123\"은 정수 " << n << "로 변환됨" << endl;
		n = stringToint("1A3");
		cout << "\"1A3\"은 정수 " << n << "로 변환됨" << endl;
	}
	catch (const char *s) {
		cout << s << "처리에서 예외 발생!!" << endl;
	}
	string s;
	try {
		s = strlower("HELLO");
		cout << "\"HELLO\"은 소문자 \"" << s << "\"로 변환됨" << endl;
		s = strlower("Hello");
		cout << "\"Hello\"은 소문자 \"" << s << "\"로 변환됨" << endl;
	}
	catch (const char *s) {
		cout << s << "처리에서 예외 발생!!" << endl;
	}
	return 0;
}