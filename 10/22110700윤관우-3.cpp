/*
* 파일명: "22110700윤관우-3.cpp"
* 프로그램의 목적 및 기능:
* 	1. 추상클래스 Calculator를 상속받아 정수의 합과 차, 배열의 평균을 반환하는 멤버 함수를 가진 GoodCalc 클래스를 구현
* 	2. Calculator에 두 수를 곱하는 순수 가상 함수 multiply를 추가하고, GoodCalc에서 함수를 구현, 출력 확인
* 	3. 출력 형식: (return)
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 11월 12일
*/

#include <iostream>
using namespace std;

class Calculator {
public:
	virtual int add(int a, int b) = 0; // 두 정수 합
	virtual int subtract(int a, int b) = 0; // 두 정수 차
	virtual double average(int a [], int size) = 0; // 배열 a의 평균, size는 배열 크기
	virtual long multiply(int a, int b) = 0; // 두 정수 곱
};

class GoodCalc : public Calculator {
public:
	int add(int a, int b) { return a + b; }
	int subtract(int a, int b) { return a - b; }
	double average(int a [], int size) {
		double sum = 0;
		for (int i = 0; i < size; i++)
			sum += a[i];
		return sum / size;
	}
	long multiply(int a, int b) { return a * b; }
};

int main() {
	int a[] = {1, 2, 3, 4, 5};
	Calculator *p = new GoodCalc();
	cout << p -> add(2, 3) << endl;
	cout << p -> subtract(2, 3) << endl;
	cout << p -> average(a, 5) << endl;
	cout << p -> multiply(2, 3) << endl;
}