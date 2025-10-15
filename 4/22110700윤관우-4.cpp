/*
* 파일명: "22110700윤관우-4.cpp"
* 프로그램의 목적 및 기능:
*   1. 3개의 Person 객체 배열을 선언하고, 키보드에서 이름과 전화번호를 입력받아 출력하고 검색
*   2. 입력 형식: 이름과 전화번호를 입력하세요 (이름 전화번호), 전화번호를 검색할 이름을 입력하세요 >> (string)
*   3. 출력 형식(예시): 모든 사람의 이름: (이름 배열), (이름) 전화번호: (전화번호)
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 9월 24일
*/

#include <iostream>
#include <string>
using namespace std;

class Person
{
    string name;
    string tel;
public:
    Person();
    string getName() {return name;}
    string getTel() {return tel;}
    void set(string name, string tel);
};

Person::Person()
{
    name = "";
    tel = "";
}

void Person::set(string name, string tel)
{
    this->name = name;
    this->tel = tel;    
}


int main()
{
    string s, name, tel;
    Person p[3];
    cout << "이름과 전화번호를 입력하세요" << endl;
    getline(cin, s, '\n');
    name = s.substr(0, s.find(" ")); // 공백 전까지 이름으로 분리

}