#include "TArray.h"

TArray::TArray() : max(0), count(0), array(nullptr) {}
TArray::TArray(int _max) {
	max = _max;
	count = 0;
	array = new TNode[max];
}
void TArray::Add() {
	string _key;
	cout << "Введите ключи для добавления в таблицу\nЧтобы выйти - нажмите CTRL+Z" << endl;
	while (count < max && cin >> _key) {
		int answer = 0;
		for (int i = 0; i < count; ++i) {
			if (array[i].key == _key) {
				array[i].value++;
				answer = 1;
				break;
			}
		}
		if (answer == 0) {
			array[count].key = _key;
			array[count].value = 1;
			count++;
		}
	}
}
void TArray::Print() {
	for (int i = 0; i < count; ++i) {
		cout << array[i].key << '\t' << array[i].value << endl;
	}
	cout << endl;
}
bool TArray::IsFull() {
	return count == max;
}
bool TArray::IsEmpty() {
	return count == 0;
}
int TArray::Find(string s) {
	int answer = 0;
	int i = 0;
	for (; i < count; i++) {
		if (array[i].key == s) {
			cout << "Ключ '" << array[i].key << "' найден в таблице со значением " << array[i].value << endl;
			answer = 1;
			break;
		}
	}
	if (answer == 0) {
		cout << "Запись не найдена." << endl;
		return -1;
	}
	else return i;
}
void TArray::Delete(string s) {
	int i = Find(s);
	if (i >= 0) {
		array[i].key = array[count - 1].key;
		array[i].value = array[count - 1].value;
		count--;
	}
}