/*
* 파일명: "22110700윤관우-1.cpp"
* 프로그램의 목적 및 기능:
* 	1. get()을 이용하여 텍스트 파일 c:\windows\system.ini를 읽어 화면에 출력
* 	2. 텍스트 파일에 있는 's'의 개수를 출력하도록 수정
* 	3. 출력 형식: (파일 내용) / s의 개수는 (count)
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 12월 3일
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* file = "c:\\windows\\system.ini";

	ifstream fin(file);
	if (!fin) {
		cout << file << " 열기 오류" << endl;
		return 0;
	}
	int count = 0;
	int c;
	while ((c = fin.get()) != EOF) {
		cout << (char)c;
		if (c == 's') {
			count++;
		}
	}
	cout << "s의 개수는 " << count << endl;
	fin.close();
}