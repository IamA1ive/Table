//���� ���� ��� ���� ������
//����� �� ����� ��� ���� ������
//�������� ��� ���� ������
//������ ������ ����� ���� ������, �� ����
//� ���� ������� ������ ����� �������, � � ������ ���
#include "TArray.h"
#include "TList.h"
#include "TListNode.h"
#include "TNode.h"
#include "TSortedArray.h"
#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	TList A(3);

	cout << A.IsEmpty();

	A.Add();
	cout << A.IsEmpty();
	cout << A.IsFull();
	return 0;
}
