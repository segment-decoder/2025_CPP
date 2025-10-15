/*
* 파일명: "22110700윤관우-3.cpp"
* 프로그램의 목적 및 기능:
*   1. 빈칸을 포함하는 문자열을 입력 받고, 한 문자씩 왼쪽 / 두 문자씩 오른쪽으로 회전하게 출력
*   2. 입력 형식: 문자열을 입력하세요(한글 안됨) (string)
*   3. 출력 형식(예시): bca cab abc, cab bca abc
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 9월 24일
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;

    cout << "문자열을 입력하세요(한글 안됨) "<< endl;
    getline(cin, s, '\n'); // 문자열 입력
    int len = s.length(); // 문자열의 길이

    for (int i = 0; i < len; i++)
    {
        string first = s.substr(0, 1); // 맨 앞의 문자 1개를 문자열로 분리
        string sub = s.substr(1, len - 1); // 나머지 문자들을 문자열로 분리
        s = sub + first; // 두 문자열을 연결하여 새로운 문자열로 만듦
        cout << s << endl;
    }

    cout << endl;

    for (int i = 0; i < len/2; i++)
    {
        string last = s.substr(len - 2, 2); // 맨 뒤의 문자 2개를 문자열로 분리
        string sub = s.substr(0, len - 2); // 나머지 문자들을 문자열로 분리
        s = last + sub; // 두 문자열을 연결하여 새로운 문자열로 만듦
        cout << s << endl;
    }
}