/*
* 파일명: "22110700윤관우-2.cpp"
* 프로그램의 목적 및 기능:
* 	1. vector 컨테이너를 활용하여 정수 벡터 생성
* 	2. vector의 모든 원소 출력, 벡터의 특정 원소 변경 및 출력
* 	3. vector의 연산자 함수를 사용 후 출력
* 	4. 출력 형식: (원소 1) (원소 2) ... (원소 n) / (return)
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 11월 19일
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	v[0] = 10;
	int n = v[2];
	v.at(2) = 5;

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	cout << v.empty() << endl;
	cout << v.capacity() << endl;
	cout << v.size() << endl;
	v.push_back(4);
	cout << v.capacity() << endl;
	cout << v.size() << endl;
}