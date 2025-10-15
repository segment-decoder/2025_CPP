/*
* 파일명: "22110700윤관우-1.cpp"
* 프로그램의 목적 및 기능:
*	1. 참조 매개 변수를 통해 평균을 리턴
*	2. 리턴문을 통해 함수의 성공여부를 리턴하도록 average()함수를 작성
*	3. 참조 매개 변수를 사용하여 average()함수에서 가장 큰 값을 찾고, main에서 가장 큰 값을 출력
*	4. 출력 형식: 평균은 (avg) 최대는 (max), 매개 변수 오류
* 프로그램 작성자: 윤관우
* 프로그램 작성일: 2025년 10월 1일
*/

#include <iostream>
using namespace std;

bool average(int a[], int size, int& avg, int& max)
{
	if (size <= 0)
		return false;
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += a[i];
	avg = sum / size;

	int maximum = a[0];
	for (int j = 1; j < size; j++)
	{
		if (a[j] > maximum)
			maximum = a[j];
	}
	max = maximum;
	return true;
}

int main()
{
	int x[] = { 0, 1, 2, 3, 4, 5 };
	int avg;
	int max;
	if (average(x, 6, avg, max))
	{
		cout << "평균은" << avg << endl;
		cout << "최대는" << max << endl;
	}
	else cout << "매개 변수 오류" << endl;

	if (average(x, -2, avg, max))
	{
		cout << "평균은" << avg << endl;
		cout << "최대는" << max << endl;
	}
	else cout << "매개 변수 오류" << endl;
}