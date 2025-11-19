/*
* 파일명: "22110700윤관우-3.cpp"
* 프로그램의 목적 및 기능:
* 	1. map 컨테이너를 이용하여 (영어, 한글) 단어를 쌍으로 저장하고, 영어로 한글을 검색하는 사전 구현
* 	2. 사용자로부터 (영어, 한글) 단어쌍을 3개 입력 받아서 사전에 추가하도록 수정
* 	3. 입력 형식: 찾고 싶은 단어>> (입력) / "추가할 단어(영어, 한글)>> "(입력)
* 	4. 출력 형식: 저장된 단어 개수 (return) / 없음 / (return) / 종료합니다... / 추가되었습니다.
* 프로그램 작성일: 2025년 11월 19일
*/

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	map<string, string> dlc;

	string add_en, add_ko;
	for (int i = 0; i < 3; ++i)
	{
		cout << "추가할 단어(영어, 한글)>> ";
		cin >> add_en >> add_ko;
		dlc.insert(make_pair(add_en, add_ko));
		cout << "추가되었습니다." << endl;
	}
	cout << "저장된 단어 개수 " << dlc.size() << endl;
	
	string eng;
	while (true)
	{
		cout << "찾고 싶은 단어>> ";
		getline(cin, eng);
		if (eng == "exit")
			break;
		if (dlc.find(eng) == dlc.end())
			cout << "없음" << endl;
		else
			cout << dlc[eng] << endl;
	}
	cout << "종료합니다..." << endl;
}