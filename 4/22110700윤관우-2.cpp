/*
* 파일명: "22110700윤관우-2.cpp"
* 프로그램의 목적 및 기능:
*   1. 사용자로부터 입력할 문자/정수의 개수를 입력 받아 문자형 배열을 동적 할당
*   2. 하나씩 문자를 입력 받은 후 입력 받은 전체 문자를 한 줄로 출력 / 정수의 평균 출력
*   3. 입력 형식: 입력할 (정수/문자)의 개수는? (n), (i)번째 (정수/문자): (배열[i])
*   4. 출력 형식: 입력한 문자는 (문자열) 입니다. , 평균 = (sum/n)
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 9월 24일
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "입력할 정수의 개수는? ";
    int n;
    cin >> n; // 정수의 개수 입력
    if (n <= 0) return 0;
    int* p = new int[n]; // n개의 정수 배열 동적 할당
    if (!p)
    {
        cout << "메모리를 할당할 수 없습니다.";
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "번째 정수: "; // 프롬프트 출력
        cin >> p[i]; // 키보드로부터 정수 입력
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += p[i];
    cout << "평균 = " << sum/n << endl;

    delete[] p; // 배열 메모리 반환

    cout << "입력할 문자의 개수는? ";
    cin >> n; // 문자의 개수 입력
    if (n <= 0) return 0;
    char* cp = new char[n]; // n개의 문자 배열 동적 할당
    if (!cp)
    {
        cout << "메모리를 할당할 수 없습니다.";
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "번째 문자: "; // 프롬프트 출력
        cin >> cp[i]; // 키보드로부터 문자 입력
    }

    cout << "입력한 문자는 ";
    for (int i = 0; i < n; i++)
        cout << cp[i]; // 문자 출력
    cout << " 입니다." << endl;
}