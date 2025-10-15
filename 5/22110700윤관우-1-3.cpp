/*
* ���ϸ�: "22110700������-1.cpp"
* ���α׷��� ���� �� ���:
*	1. ���� �Ű� ������ ���� ����� ����
*	2. ���Ϲ��� ���� �Լ��� �������θ� �����ϵ��� average()�Լ��� �ۼ�
*	3. ���� �Ű� ������ ����Ͽ� average()�Լ����� ���� ū ���� ã��, main���� ���� ū ���� ���
*	4. ��� ����: ����� (avg) �ִ�� (max), �Ű� ���� ����
* ���α׷� �ۼ���: ������
* ���α׷� �ۼ���: 2025�� 10�� 1��
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
		cout << "�����" << avg << endl;
		cout << "�ִ��" << max << endl;
	}
	else cout << "�Ű� ���� ����" << endl;

	if (average(x, -2, avg, max))
	{
		cout << "�����" << avg << endl;
		cout << "�ִ��" << max << endl;
	}
	else cout << "�Ű� ���� ����" << endl;
}