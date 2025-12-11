/*
* 파일명: "22110700윤관우-3.cpp"
* 프로그램의 목적 및 기능:
* 	1. 두 양수를 입력받아 나누기한 결과를 출력하는 프로그램 작성
* 	2. 음수 입력과 0으로 나누기에 대해 예외 처리하도록 예외 클래스 작성
* 	3. 나누기한 결과가 10 이상이면 예외처리하는 예외 클래스 추가
* 	4. 입력 형식: 나눗셈을 합니다. 두 개의 양의 정수를 입력하세요>>
*	5. 출력 형식: (return) / main():(입력) , (예외 메시지)
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 12월 11일
*/

#include <iostream>
#include <string>
using namespace std;

class MyException {
	int lineNo;
	string func, msg;
public:
	MyException(int n, string f, string m) {
		lineNo = n; func = f; msg = m;
	}
	void print() { cout << func << ";" << lineNo << "," << msg << endl; }
};

class DivideByZeroException : public MyException {
public:
	DivideByZeroException(int lineNo, string func, string msg)
		: MyException(lineNo, func, msg) {}
};

class InvalidInputException : public MyException {
public:
	InvalidInputException(int lineNo, string func, string msg)
		: MyException(lineNo, func, msg) {}
};

class ResultMoreThanTenException : public MyException {
public:
	ResultMoreThanTenException(int lineNo, string func, string msg)
		: MyException(lineNo, func, msg) {}
};

int main() {
	int x, y;
	try {
		cout << "나눗셈을 합니다. 두 개의 양의 정수를 입력하세요>>";
		cin >> x >> y;
		if (x < 0 || y < 0)
			throw InvalidInputException(51, "main()", "음수 입력 예외 발생");
		if (y == 0)
			throw DivideByZeroException(53, "main()", "0으로 나누는 예외 발생");
		if (x / y >= 10)
			throw ResultMoreThanTenException(55, "main()", "나눗셈 결과가 10 이상 예외 발생");
		cout << (double)x / (double)y;
	}
	catch (DivideByZeroException& e) {
		e.print();
	}
	catch (InvalidInputException& e) {
		e.print();
	}
	catch (ResultMoreThanTenException& e) {
		e.print();
	}
}