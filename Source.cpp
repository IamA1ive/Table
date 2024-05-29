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
#include <string>
#include <locale.h>
using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");
	int answer;
	int size;
	cout << "������� ������ �������" << endl;
	cin >> size;
	TArray A(size);
	cout << "������� ������ ��������������� �������" << endl;
	cin >> size;
	TSortedArray S(size);
	cout << "������� ������ ������" << endl;
	cin >> size;
	TList L(size);
	string _key = "";
	string tmp = "";

	do {
		cout << "1. �������� ������" << endl;
		cout << "2. ����� �� �����" << endl;
		cout << "3. �����" << endl;
		cout << "4. �������" << endl;
		cout << "5. ��������� �������" << endl;
		cout << "6. ��������� �������" << endl;
		cout << "0. �����" << endl;
		cin >> answer;
		switch (answer) {
		case 1:
			cout << "������� ����� ��� ���������� � �������\n����� ����� - ������� 0" << endl;
			cin >> _key;
			while (_key != "0") {
				A.Add(_key);
				S.Add(_key);
				L.Add(_key);
				cin >> _key;
			}
			break;
		case 2:
			A.Print();
			S.Print();
			L.Print();
			break;
		case 3:
			cout << "������� ������� ����" << endl;
			cin >> tmp;
			cout << endl;
			A.Find(tmp);
			S.BinSearch(tmp);
			L.Find(tmp);
			cout << endl;
			break;
		case 4:
			cout << "������� ���� ��� ��������" << endl;
			cin >> tmp;
			cout << endl;
			A.Delete(tmp);
			S.Delete(tmp);
			L.Delete(tmp);
			cout << endl;
			break;
		case 5:
			cout << endl;
			if (A.IsEmpty()) cout << "������� �����" << endl;
			else cout << "������� �� �����" << endl;
			if (S.IsEmpty()) cout << "��������������� ������� �����" << endl;
			else cout << "��������������� ������� �� �����" << endl;
			if (L.IsEmpty()) cout << "������ ����" << endl << endl;
			else cout << "������ �� ����" << endl << endl;
			break;
		case 6:
			if (A.IsFull()) cout << "������� ���������" << endl;
			else cout << "������� �� ���������" << endl;
			if (S.IsFull()) cout << "��������������� ������� ���������" << endl;
			else cout << "��������������� ������� �� ���������" << endl;
			if (L.IsFull()) cout << "������ ��������" << endl;
			else cout << "������ �� ��������" << endl;
			break;
		case 0:
			break;
		default:
			cout << "������." << endl;
		}
	} while (answer != 0);
	return 0;
}
