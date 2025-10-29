/*
* 파일명: "22110700윤관우-1.cpp"
* 프로그램의 목적 및 기능:
* 	1. 다른 클래스 전체를 프렌드로 선언하여 변수값 복사 후 같은지 비교
* 	2. width와 height의 합을 계산하는 RectManager::sum 함수 구현 및 출력
* 	3. 출력 형식: equal, not equal, sum: (return)
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 10월 29일
*/

#include <iostream>
using namespace std;

class Rect;

class RectManager{
public:
    bool equals(Rect r, Rect s);
    void copy(Rect& dest, Rect& src);
    void sum(Rect r);
};

class Rect{
    int width, height;
public:
    Rect(int width, int height) { this->width = width; this->height = height; }
    friend RectManager;
};

bool RectManager::equals(Rect r, Rect s) {
    if (r.width == s.width && r.height == s.height) return true;
    else return false;
}

void RectManager::copy(Rect& dest, Rect& src) {
    dest.width = src.width; dest.height = src.height;
}

void RectManager::sum(Rect r) {
    cout << "sum: " << r.width + r.height << endl;
}

int main() {
    Rect a(3, 4); Rect b(5, 6);
    RectManager man;

    man.copy(b, a);
    if (man.equals(a, b)) cout << "equal" << endl;
    else cout << "not equal" << endl;

    man.sum(a);
}