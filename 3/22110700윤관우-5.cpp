/*
* 파일명: "22110700윤관우-5.cpp"
* 프로그램의 목적 및 기능:
*   1. 이름, id, 잔액을 매개 변수로 받는 생성자를 포함하는 Account 클래스 구현
*   2. 입금, 출금, 잔액조회, 이름조회 멤버 함수 구현
*   3. 현재 잔액을 출력
*   4. 출력 형식: (이름)의 잔액은 (잔액)
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 9월 17일
*/

#include <iostream>
#include <string>
using namespace std;

class   Account
{
    public:
        string name;
        int id;
        int inq;

        Account(const char _name[], int _id, int _inq); // 계좌 생성
        string getOwner(); // 이름 조회
        void deposit(int d); // 입금
        int withdraw(int w); // 출금
        int inquiry(); // 잔액 조회
};

Account::Account(const char _name[], int _id, int _inq)
{
    name = _name;
    id = _id;
    inq = _inq;
}

string  Account::getOwner()
{
    return name;
}

void    Account::deposit(int d)
{
    inq += d;
}

int Account::withdraw(int w)
{
    inq -= w;
    return inq;
}

int Account::inquiry()
{
    return inq;
}

int main()
{
   Account a("Tom", 1, 5000); //이름 Tom, id 1번, 잔액 5000원인 계좌생성
   a.deposit(5000);    //5000원 입금
   cout << a.getOwner() << "의 잔액은" << a.inquiry() << endl;
   int money = a.withdraw(2000);   //2000원 출금
   cout << a.getOwner() << "의 잔액은" << a.inquiry() << endl;
}