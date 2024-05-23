#include "TList.h"
TList::TList() : max(0), count(0), pFirst(nullptr), pNext(nullptr) {}
TList::TList(int _max) : max(_max), count(0), pFirst(nullptr), pNext(nullptr) {}
bool TList::IsFull() { return count == max; }
bool TList::IsEmpty() { return  count == 0; }
//void TList::Add() {
//	string _key;
//	cout << "Введите ключи для добавления в таблицу\nЧтобы выйти - нажмите CTRL+Z" << endl;
//	while (count < max && cin >> _key) {
//		int answer = 0;
//		for (int i = 0; i < count; ++i) {
//			if (array[i].key == _key) {
//				array[i].value++;
//				answer = 1;
//				break;
//			}
//		}
//		if (answer == 0) {
//			array[count].key = _key;
//			array[count].value = 1;
//			count++;
//		}
//	}
//}