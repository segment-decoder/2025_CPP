/*
* 파일명: "22110700윤관우-3.cpp"
* 프로그램의 목적 및 기능:
* 	1. 사용자로부터 문자열을 입력 받는 사용자 정의 조작자 question 작성
* 	2. 사용자로부터 정수를 입력 받는 사용자 정의 조작자 MyNumber를 추가, 출력
* 	3. 입력 형식: 거울아 거울아 누가 제일 예쁘니? / 정수를 입력하세요:
* 	4. 출력 형식: 세상에서 제일 예쁜 사람은 (입력한 문자열)입니다. / 입력한 정수는 (입력한 정수)입니다.
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 11월 26일
*/

#include <iostream>
#include <string>
using namespace std;

istream& question(istream& ins) {
	cout << "거울아 거울아 누가 제일 예쁘니?";
	return ins;
}

istream& MyNumber(istream& ins) {
	cout << "정수를 입력하세요:";
	return ins;
}

int main() {
	string answer;
	cin >> question >> answer;
	cout << "세상에서 제일 예쁜 사람은 " << answer << "입니다." << endl;

	int number;
	cin >> MyNumber >> number;
	cout << "입력한 정수는 " << number << "입니다." << endl;
}