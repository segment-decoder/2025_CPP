/*
* 파일명: "22110700윤관우-2.cpp"
* 프로그램의 목적 및 기능:
* 	1. read()를 이용하여 한 번에 32바이트씩 c:\windows\system.ini 파일을 읽어 화면에 출력하는 프로그램 작성
* 	2. 32바이트마다 줄바꿈이 화면에 출력되도록 수정
* 	3. 출력 형식: (파일 내용 32바이트)(줄바꿈) / 읽은 바이트 수는 (count)
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 12월 3일
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* file = "c:\\windows\\system.ini";

	ifstream fin;
	fin.open(file, ios::in | ios::binary); // 읽기 모드로 파일 열기
	if(!fin) { // 열기 실패 검사
		cout << "파일 열기 오류";
		return 0;
	}

	int count = 0;
	char s[32];
	while(!fin.eof()) { // 파일 끝까지 읽는다.
		fin.read(s, 32); // 최대 32 바이트를 읽어 배열 s에 저장
		int n = fin.gcount(); // 실제 읽은 바이트 수 알아냄
		cout.write(s, n); // 버퍼에 있는 n 개의 바이트를 화면에 출력
		cout << endl; // 32바이트마다 줄바꿈
		count += n;
	}
	cout << "읽은 바이트 수는 " << count << endl;
	fin.close(); // 입력 파일 닫기
}