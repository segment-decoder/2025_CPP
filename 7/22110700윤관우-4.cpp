/*
* 파일명: "22110700윤관우-4.cpp"
* 프로그램의 목적 및 기능:
* 	1. 세 개의 == 연산자 함수를 가진 Book 클래스 구현
* 	2. price, title 각각에 대한 연산자 함수, price, title, pages 모두에 대한 연산자 함수 구현
* 	3. 출력 형식: 정가 30000원 / 명품 C++입니다. / 두 책이 같은 책입니다. / 두 책이 다른 책입니다.
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 10월 29일
*/

#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	int price;
	int pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title;
		this->price = price;
		this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "원 " << pages << "페이지" << endl;
	}
	friend bool operator ==(Book book, int price);
	friend bool operator ==(Book book, string title);
	friend bool operator ==(Book book1, Book book2);
};

int main() {
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if(a == 30000) cout << "정가 30000원" << endl; // price 비교
	if(a == "명품 C++") cout << "명품 C++ 입니다." << endl; // 책 title 비교
	if(a == b) cout << "두 책이 같은 책입니다." << endl; // title, price, pages 모두 비교 
	else cout << "두 책이 다른 책입니다." << endl;
}