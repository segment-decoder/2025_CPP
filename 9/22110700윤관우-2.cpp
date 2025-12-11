/*
* 파일명: "22110700_윤관우-2.cpp"
* 프로그램의 목적 및 기능:
* 	1. TV 클래스, TV를 상속한 WideTV 클래스, WideTV를 상속한 SmartTV 클래스 선언
* 	2. SmartTV를 상속받는 MyTV 클래스 선언 및 color 출력
* 	3. 출력 형식: size=(size) / videoin=(vidioin) / IP=(ipAddr) / color=(color)
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 11월 05일
*/

#include <iostream>
#include <string>
using namespace std;

class TV {
	int size;
public:
	TV() { size = 20; }
	TV(int size) { this->size = size; }
	int getSize() { return size; }
};

class WideTV : public TV {
	bool videoin;
public:
	WideTV(int size, bool videoin) : TV(size) {
		this->videoin = videoin;
	}
	bool getVidioin() { return videoin; }
};

class SmartTV : public WideTV {
	string ipAddr;
public:
	SmartTV(string ipAddr, int size) : WideTV(size, true) {
		this->ipAddr = ipAddr;
	}
	string getIpAddr() { return ipAddr; }
};

class MyTV : public SmartTV {
	string color;
public:
	MyTV(string color, string ipAddr, int size) : SmartTV(ipAddr, size) {
		this->color = color;
	}
	string getColor() { return color; }
};

int main() {
	SmartTV htv("192.0.0.1", 32);
	cout << "size=" << htv.getSize() << endl;
	cout << "videoin=" << boolalpha << htv.getVidioin() << endl;
	cout << "IP=" << htv.getIpAddr() << endl;
	MyTV mtv("blue", "192.0.0.1", 32);
	cout << "color=" << mtv.getColor() << endl;
}