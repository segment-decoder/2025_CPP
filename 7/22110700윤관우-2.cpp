/*
* 파일명: "22110700윤관우-2.cpp"
* 프로그램의 목적 및 기능:
* 	1. 두 개의 Power 객체를 비교하는 == 연산자 작성
* 	2. 두 개의 Power 객체가 다를 때 true를 반환하는 != 연산자 작성 및 출력
* 	3. 출력 형식: kick=(kick),punch=(punch) / 두 파워가 같다. / 두 파워가 같지 않다. / 다르다 / 같다
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 10월 29일
*/

#include <iostream>
using namespace std;

class Power {
    int kick;
    int punch;
public:
    Power(int kick = 0, int punch = 0) {
        this->kick = kick;
        this->punch = punch;
    }
    void show();
    bool operator==(Power op2);
	bool operator!=(Power op2);
};

void Power::show() {
    cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

bool Power::operator==(Power op2) {
    if (kick == op2.kick && punch == op2.punch) return true;
    else return false;
}

bool Power::operator!=(Power op2) {
	if (kick != op2.kick || punch != op2.punch) return true;
	else return false;
}

int main() {
	Power a(3, 5), b(3, 5);
    a.show();
    b.show();
    if(a == b) cout << "두 파워가 같다." << endl;
    else cout << "두 파워가 같지 않다." << endl;
	if(a != b) cout << "다르다" << endl;
	else cout << "같다" << endl;
}