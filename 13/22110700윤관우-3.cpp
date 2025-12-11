/*
* 파일명: "22110700윤관우-3.cpp"
* 프로그램의 목적 및 기능:
* 	1. 존재하지 않는 파일과 존재하는 파일을 열 때 스트림의 상태를 멤버 함수로 확인하여 출력
* 	2. 자신의 학번이 showStreamState에서 출력되도록 추가
* 	3. 출력 형식: (파일명) 열기 오류 eof() (값) fail() (값) bad() (값) good() (값) /
				(파일명) 파일 열기 eof() (값) fail() (값) bad() (값) good() (값) /
				(파일 내용) eof() (값) fail() (값) bad() (값) good() (값)
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 12월 3일
*/

#include <iostream>
#include <fstream>
using namespace std;

void showStreamState(ios& stream) {
	cout << "eof() " << stream.eof() << endl;
	cout << "fail() " << stream.fail() << endl;
	cout << "bad() " << stream.bad() << endl;
	cout << "good() " << stream.good() << endl;
}

int main() {
	const char* noExistFile = "c:\\temp\\noexist.txt"; // 존재하지 않는 파일명
	const char* existFile = "c:\\temp\\student.txt"; // 존재하는 파일명

	ifstream fin(noExistFile); // 존재하지 않는 파일 열기
	if(!fin) { // 열기 실패 검사
		cout << noExistFile << " 열기 오류" << endl;
		showStreamState(fin); // 스트림 상태 출력

		cout << existFile << " 파일 열기" << endl;
		fin.open(existFile);
		showStreamState(fin); // 스트림 상태 출력
	}

	// 스트림을 끝까지 읽고 화면에 출력
	int c;
	while((c=fin.get()) != EOF)
		cout.put((char)c);

	cout << endl;
	showStreamState(fin); // 스트림 출력

	fin.close();

	const char* proFile = "c:\\temp\\profile.txt"; // 본인 학번 이름 작성된 파일명
	ifstream fin2(proFile); // 파일 열기
	if (!fin2) {
		cout << proFile << " 열기 오류" << endl;
		showStreamState(fin2); // 스트림 상태 출력
	}
	else {
		cout << proFile << " 파일 열기" << endl;
		showStreamState(fin2); // 스트림 상태 출력
		while ((c = fin2.get()) != EOF)
			cout.put((char)c);
		cout << endl;
		showStreamState(fin2); // 스트림 출력
	}
	fin2.close();
}