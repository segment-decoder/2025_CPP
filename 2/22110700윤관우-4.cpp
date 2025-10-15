/*
* 파일명: "22110700윤관우-4.cpp"
* 프로그램의 목적 및 기능:
*   1. 커피 메뉴와 수량을 입력받아 주문
*   2. 하루에 20,000원 이상 벌게 되면 영업을 종료
*   3. 커피 종류는 "에스프레소", "아메리카노", "카푸치노"이며
*       가격은 각각 2,000원, 2,500원, 3,000원
*   4. 입력형식 : 주문>>(coffee)) (count)
*   5. 출력형식 : 가격은 (price)원 입니다., 입력이 올바르지 않습니다. 다시 주문해주세요.
*       , 오늘은 (sale)원을 판매하여 영업을 종료합니다., 없는 메뉴입니다. 다시 주문해주세요.
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 9월 10일
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string coffee; // 커피 종류
    int count; // 수량
    int price; // 주문당 총 가격
    int sale = 0; // 매상
    int goal = 20000; // 영업 종료 기준 금액

    while (true)
    {
        cout << "주문>>"; // 주문 시작
        cin >> coffee >> count; // 커피 종류와 수량 입력
        if (cin.fail()) // 입력 오류 처리
        {
            cout << "입력이 올바르지 않습니다. 다시 주문해주세요." << endl;
            cin.clear(); // 오류 상태 초기화
            cin.ignore(10000, '\n'); // 잘못된 입력 버퍼 비우기
            continue;
        }
        if (coffee == "에스프레소")
        {
            price = 2000 * count;
        }
        else if (coffee == "아메리카노")
        {
            price = 2500 * count;
        }
        else if (coffee == "카푸치노")
        {
            price = 3000 * count;
        }
        else
        {
            cout << "없는 메뉴입니다. 다시 주문해주세요." << endl;
            continue; // 잘못된 커피 종류 입력 시 다시 주문 받기
        }
        sale += price; // 매상에 현재 주문 추가
        cout << "가격은 " << price << "원 입니다." << endl; // 주문 가격 출력
        if (sale >= goal) // 영업 종료 조건 확인
        {
            cout << "오늘은 " << sale << "원을 판매하여 영업을 종료합니다." << endl;
            break; // 영업 종료
        }
    }
    return 0;
}