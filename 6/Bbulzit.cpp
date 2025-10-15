/*
* 파일명: "22110700윤관우-1.cpp"
* 프로그램의 목적 및 기능:
* 	1. 두 수를 비교하여 큰 수를 반환하는 함수와 배열에서 큰 수를 찾아 반환하는 함수의 중복 구현
*	2. 세 개의 정수 중 큰 수를 리턴하는 중복 함수를 추가하고 main에서 출력하도록 수정
* 	3. 출력 형식: (함수 1 return)endl, (함수 2 return)endl, (함수 3 return)endl
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 10월 15일
*/

#include <iostream>
using namespace std;

int big(int a, int b)
{
	if (a > b) return a;
	else return b;
}

int big(int a[], int size)
{
	int res = a[0];
	for (int i = 1; i <size; i++)
		if (res < a[i]) res = a[i];
	return res;
}

int big(int a, int b, int c)
{
	int res = (a > b) ? a : b;
	res = (res > c) ? res : c;
	return res;
}

int main()
{
	int array[5] = {1, 9, -2, 8, 6};
	cout << big(2, 3) << endl;
	cout << big(array, 5) << endl;
	cout << big(2, 5, 4) << endl;
}