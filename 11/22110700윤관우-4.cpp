/*
* 파일명: "22110700윤관우-4.cpp"
* 프로그램의 목적 및 기능:
* 	1. 배열에서 원소를 검색하는 search() 함수를 템플릿으로 작성
* 	2. search()의 첫번째 매개변수는 검색하고자 하는 원소 값이고, 두번째 매개변수는 배열이며, 세번째 매개변수는 배열의 갯수이다.
* 	3. search()함수가 검색에 성공하면 true를, 아니면 false를 리턴한다.
* 	4. 출력 형식: (원소 값)이 배열 (배열)에 포함되어 있다 / (원소 값)이 배열 (배열)에 포함되어 있지 않다
* 프로그램 작성일: 2025년 11월 19일
*/

#include <iostream>
using namespace std;

template <class T1, class T2>
bool search(T1 element, T2 arr, size_t len)
{
	size_t i = 0;

	while (len > i)
	{
		if (arr[i++] == element)
			return true;
	}
	return false;
}

int main() {
	int x[] = {1, 10, 100, 5, 4};
	if(search(100, x, 5))  // 100이 배열 x에 포함되어 있는가?
		cout << "100이 배열 x에 포함되어 있다";
	else
		cout << "100이 배열 x에 포함되어 있지 않다";
		cout << endl;
	char c[] = {'h', 'e', 'l', 'l', 'o'};
	if(search('e', c, 5))  // 'e'가 배열 c에 포함되어 있는가?
		cout << "e가 배열 c에 포함되어 있다";
	else
		cout << "e가 배열 c에 포함되어 있지 않다";
		cout << endl;
}