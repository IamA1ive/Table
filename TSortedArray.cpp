#include "TSortedArray.h"

TSortedArray::TSortedArray() : max(0), count(0), array(nullptr) {}
TSortedArray::TSortedArray(int _max) {
	max = _max;
	count = 0;
	array = new TNode[max];
}
void TSortedArray::Sort() {
	int i, j;
	for (i = 1; i < count; i++) {
		j = i;
		while ((j > 0) && (array[j - 1].key > array[j].key)) {
			TNode tmp;
			tmp.key = array[j - 1].key;
			tmp.value = array[j - 1].value;
			array[j - 1].key = array[j].key;
			array[j - 1].value = array[j].value;
			array[j].key = tmp.key;
			array[j].value = tmp.value;
			j--;
		}
	}
}
void TSortedArray::Add(string _key) {
	if (count < max || BinSearch(_key) >= 0) {
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
		Sort();
	}
	else cout << "Отсортированная таблица заполнена." << endl;
}
void TSortedArray::Print() {
	cout << endl << "Отсортированная таблица:" << endl;
	for (int i = 0; i < count; ++i) {
		cout << array[i].key << '\t' << array[i].value << endl;
	}
	cout << endl;
}
bool TSortedArray::IsFull() {
	return count == max;
}
bool TSortedArray::IsEmpty() {
	return count == 0;
}
int TSortedArray::BinSearch(string s) {
	int answer = 0;
	int left = 0, right = count - 1, middle;
	while (left <= right) {
		middle = (left + right) / 2;
		if (array[middle].key < s) left = middle + 1;
		else if (array[middle].key > s) right = middle - 1;
		else {
			answer = 1;
			cout << "Ключ '" << array[middle].key << "' найден в отсортированной таблице со значением " << array[middle].value << endl;
			break;
		}
	}
	if (answer == 0) {
		cout << "Запись не найдена." << endl;
		return -1;
	}
	else return middle;
}
void TSortedArray::Delete(string s) {
	int i = BinSearch(s);
	if (i >= 0) {
		array[i].key = array[count - 1].key;
		array[i].value = array[count - 1].value;
		count--;
		Sort();
	}
}
