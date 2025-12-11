/*
* 파일명: "22110700윤관우-4.cpp"
* 프로그램의 목적 및 기능:
* 	1. 0~100점 사이의 점수를 입력받아 학점을 A(90 이상), B( 80 이상), C(70 이상), D(60 이상), F(60 미만)로 출력하는 프로그램을 작성
* 	2. 점수가 0~100 사이가 아닌 경우 예외로 처리
*	3. 입력 형식: 점수를 입력하세요>>
*	4. 출력 형식: (학점) / [입력 오류] 0~100 사이 점수만 입력하세요.
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 12월 11일
*/

#include <iostream>
using namespace std;

int main() {
	int grade;
	cout << "점수를 입력하세요>>";
	cin >> grade;
	if (cin.fail() == true || grade < 0 || grade > 100) {
		cout << "[입력 오류] 0~100 사이 점수만 입력하세요." << endl;
		return 0;
	}
	else if (grade >= 90)
		cout << "A" << endl;
	else if (grade >= 80)
		cout << "B" << endl;
	else if (grade >= 70)
		cout << "C" << endl;
	else if (grade >= 60)
		cout << "D" << endl;
	else
		cout << "F" << endl;
	return 0;
}