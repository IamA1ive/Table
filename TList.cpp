#include "TList.h"
TList::TList() : max(0), count(0), pFirst(nullptr) {}
TList::TList(int _max) {
	max = _max;
	count = 0;
	pFirst = nullptr;
}
bool TList::IsFull() { return count == max; }
bool TList::IsEmpty() { return  count == 0; }
void TList::Add(string _key) {
	if (count < max || Find(_key)) {
		if (count == 0) {
			pFirst = new TListNode;
			pFirst->key = _key;
			pFirst->value = 1;
			pFirst->pNext = nullptr;
			count++;
			return;
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
	else cout << "Список заполнен." << endl;
}
void TList::Print() {
	TListNode* curr = pFirst;
	cout << endl << "Таблица в виде списка:" << endl;
	while (curr != nullptr) {
		cout << curr->key << "\t	" << curr->value << endl;
		curr = curr->pNext;
	}
	cout << endl;
}
bool TList::Find(string _key) {
	TListNode* curr = pFirst;
	int answer = 0;
	while (curr != nullptr) {
		if (curr->key == _key) {
			cout << "Ключ '" << curr->key << "' найден в списке со значением " << curr->value << endl;
			answer = 1;
			break;
		}
		curr = curr->pNext;
	}
	if (answer == 0) cout << "Запись не найдена." << endl;
	return answer;
}
void TList::Delete(string _key) {
	TListNode* prev = new TListNode;
	TListNode* curr = pFirst;
	while (curr != nullptr) {
		if (pFirst->key == _key) {
			pFirst = pFirst->pNext;
			count--;
			break;
		}
		if (curr->key == _key) {
			prev->pNext = curr->pNext;
			count--;
			break;
		}
		prev = curr;
		curr = curr->pNext;
	}
	Find(_key);
}