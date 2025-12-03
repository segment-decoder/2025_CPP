/*
* 파일명: "22110700윤관우-4.cpp"
* 프로그램의 목적 및 기능:
* 	1. test.txt 파일을 열어 학번과 이름을 추가한 뒤 그 내용을 출력하는 프로그램 작성
* 	2. 기존 파일에 학번과 이름을 줄바꿈을 포함하여 추가
* 	3. 출력 형식: 
 		112233445566778899
		Yeungnam University
		(학번)
		(이름)
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 12월 3일
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* file = "c:\\temp\\test.txt"; // 파일명

	ofstream fout(file, ios::app); // 파일 열기(추가 모드)
	if (!fout) {
		cout << file << " 파일 열기 오류" << endl;
		return -1;
	}
	else { // 학번과 이름 추가
		fout << endl << "22110700" << endl << "윤관우";
		fout.close();
	}

	ifstream fin(file); // 파일 열기(읽기 모드)
	if (!fin) {
		cout << file << " 파일 열기 오류" << endl;
		return -1;
	}
	else { // 파일 내용 출력
		int c;
		while ((c = fin.get()) != EOF)
			cout.put((char)c);
		cout << endl;
		fin.close();
	}
	return 0;
}