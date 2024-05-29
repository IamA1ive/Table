//ОДИН ВВОД ДЛЯ ВСЕХ ТАБЛИЦ
//ПОИСК ПО КЛЮЧУ ДЛЯ ВСЕХ ТАБЛИЦ
//УДАЛЕНИЕ ДЛЯ ВСЕХ ТАБЛИЦ
//РАЗМЕР ТАБЛИЦ МОЖЕТ БЫТЬ РАЗНЫМ, ТО ЕСТЬ
//В ОДНУ ТАБЛИЦУ ЗАПИСЬ МОЖЕТ ПОПАСТЬ, А В ДРУГУЮ НЕТ
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
	cout << "Введите размер таблицы" << endl;
	cin >> size;
	TArray A(size);
	cout << "Введите размер отсортированной таблицы" << endl;
	cin >> size;
	TSortedArray S(size);
	cout << "Введите размер списка" << endl;
	cin >> size;
	TList L(size);
	string _key = "";
	string tmp = "";

	do {
		cout << "1. Добавить данные" << endl;
		cout << "2. Вывод на экран" << endl;
		cout << "3. Найти" << endl;
		cout << "4. Удалить" << endl;
		cout << "5. Проверить пустоту" << endl;
		cout << "6. Проверить полноту" << endl;
		cout << "0. Выход" << endl;
		cin >> answer;
		switch (answer) {
		case 1:
			cout << "Введите ключи для добавления в таблицу\nЧтобы выйти - введите 0" << endl;
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
			cout << "Введите искомый ключ" << endl;
			cin >> tmp;
			cout << endl;
			A.Find(tmp);
			S.BinSearch(tmp);
			L.Find(tmp);
			cout << endl;
			break;
		case 4:
			cout << "Введите ключ для удаления" << endl;
			cin >> tmp;
			cout << endl;
			A.Delete(tmp);
			S.Delete(tmp);
			L.Delete(tmp);
			cout << endl;
			break;
		case 5:
			cout << endl;
			if (A.IsEmpty()) cout << "Таблица пуста" << endl;
			else cout << "Таблица НЕ пуста" << endl;
			if (S.IsEmpty()) cout << "Отсортированная таблица пуста" << endl;
			else cout << "Отсортированная таблица НЕ пуста" << endl;
			if (L.IsEmpty()) cout << "Список пуст" << endl << endl;
			else cout << "Список НЕ пуст" << endl << endl;
			break;
		case 6:
			if (A.IsFull()) cout << "Таблица заполнена" << endl;
			else cout << "Таблица НЕ заполнена" << endl;
			if (S.IsFull()) cout << "Отсортированная таблица заполнена" << endl;
			else cout << "Отсортированная таблица НЕ заполнена" << endl;
			if (L.IsFull()) cout << "Список заполнен" << endl;
			else cout << "Список НЕ заполнен" << endl;
			break;
		case 0:
			break;
		default:
			cout << "Ошибка." << endl;
		}
	} while (answer != 0);
	return 0;
}
