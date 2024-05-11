#pragma once
#include <iostream>
#include "TNode.h"
#include "TArray.h"
using namespace std;

class TSortedArray {
	int max;
	int count;
	TNode* array;
public:
	TSortedArray();
	TSortedArray(int _max);
	void Add();
	void Print();
	bool IsFull();
	bool IsEmpty();
	int BinSearch(string s);
	void Delete(string s);
	void Sort();
};