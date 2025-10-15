/*
* 파일명: "22110700윤관우-3.cpp"
* 프로그램의 목적 및 기능:
*   1. 곡의 제목을 제시하고 가수의 이름을 입력받아 옳은지 판단
*   2. 맞을 때까지 반복
*   3. 가수의 이름을 첫 글자부터 틀릴 때마다 한 글자씩 힌트 제공
*   4. 입력형식 : (song)를 부른 가수는(한 글자 힌트 : (elvis[hint]))?(singer)
*   5. 출력형식 : 틀렸습니다. , 맞았습니다.
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 9월 10일
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string song("Falling in love with you");// 문자열 song
    string elvis("Elvis Presley");// 문자열 elvis
    string singer;// 문자열 singer
    int hint = 0;// 힌트 문자열 인덱스

    while(true)
    {
        cout << song + "를 부른 가수는";// +로 문자열 연결
        if (hint < elvis.size())
            cout << "(한 글자 힌트 : " << elvis[hint] << ")";// []연산자 사용
        cout << "? ";
        getline(cin, singer);// 문자열 입력
        if (singer == elvis) // 문자열 비교
            break;
        cout << "틀렸습니다." << endl;
        hint++;
    }
    cout << "맞았습니다.";
    return 0;
}