/*
* 파일명: "22110700윤관우-2.cpp"
* 프로그램의 목적 및 기능:
*   1. c-스트링을 이용하여 암호가 입력되면 프로그램을 종료
*   2. 암호가 5회 틀리면 '5회 틀렸습니다' 메시지 출력후 종료
*   3. 입력형식: 프로그램을 종료하려면 암호를 입력하세요. 암호>>(password)
*   4. 출력형식: "프로그램을 정상 종료합니다." , "암호가 틀립니다~~"
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 9월 10일
*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char password[11];
    cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;
    int i = 1;
    while (true)
    {
        cout << "암호>>";
        cin >> password;
        if (strcmp(password, "C++") == 0)
        {
            cout << "프로그램을 정상 종료합니다." << endl;
            break;
        }
        else
        {
            if (i >= 5)
            {
                cout << "5회 틀렸습니다" << endl;
                break;
            }
            cout << "암호가 틀립니다~~" << endl;
        }
        ++i;
    }
    return 0;
}