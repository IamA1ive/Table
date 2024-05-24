#include "TList.h"
TList::TList() : max(0), count(0), pFirst(nullptr) {}
TList::TList(int _max) {
	max = _max;
	count = 0;
	pFirst = nullptr;
}
bool TList::IsFull() { return count == max; }
bool TList::IsEmpty() { return  count == 0; }
void TList::Add() {
	string _key;
	cout << "Введите ключи для добавления в таблицу\nЧтобы выйти - нажмите CTRL+Z" << endl;
	while (count < max && cin >> _key) {
		if (count == 0) {
			pFirst = new TListNode;
			pFirst->key = _key;
			pFirst->value = 1;
			pFirst->pNext = nullptr;
			count++;
			continue;
		}
		TListNode* currNode = pFirst;
		TListNode* prevNode = new TListNode;
		int answer = 1;
		while (currNode != nullptr) {
			if (currNode->key == _key) {
				currNode->value++;
				answer = 0;
				break;
			}
			prevNode = currNode;
			currNode = currNode->pNext;
		}
		if (answer == 1) {
			currNode = new TListNode;
			prevNode->pNext = currNode;
			currNode->key = _key;
			currNode->value = 1;
			currNode->pNext = nullptr;
			count++;
		}
	}
}