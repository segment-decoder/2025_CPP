/*
* ���ϸ�: "22110700������-2.cpp"
* ���α׷��� ���� �� ���:
*	1. �̸��� ���ڿ��� �����ϰ� ���
*	2. �̸����� Ư�� �ε����� ���ڸ� ��ü�ϴ� ���� �Լ� �ۼ�
*	3. �Լ��� ���ϰ��� �����Ͽ� ���� ����
*	4. ���ڿ��� ���̸� ���� �����ϴ� �Լ� int& length()�� �߰�, ���ڿ��� ���̸� ���
*	5. ��� ����: (name), ���̴� (len)
* ���α׷� �ۼ���: ������
* ���α׷� �ۼ���: 2025�� 10�� 1��
*/

#include <iostream>
using namespace std;

char& find(char s[], int index)
{
	return s[index];
}

int& length(char s[])
{
	int i;
	while (s[i])
		++i;
	return	i;
}

int main()
{
	char name[] = "Mike";
	int len = length(name);
	cout << name << endl;
	cout << "���̴�" << len << endl;

	find(name, 0) = 'S';
	cout << name << endl;

	char& ref = find(name, 2);
	ref = 't';
	cout << name << endl;
}