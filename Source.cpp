//���� ���� ��� ���� ������
//����� �� ����� ��� ���� ������
//�������� ��� ���� ������
//������ ������ ����� ���� ������, �� ����
//� ���� ������� ������ ����� �������, � � ������ ���
#include <iostream>
#include <locale.h>
#include "TNode.h"
#include "TArray.h"
#include "TSortedArray.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	system("chcp 1251");
	TSortedArray A(5);

	A.Add();


	A.BinSearch("Anna");
	A.Delete("Bob");
	A.Print();

	return 0;
}
