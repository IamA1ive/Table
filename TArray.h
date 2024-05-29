#pragma once
#include <iostream>
#include "TNode.h"
using namespace std;
class TArray {
	int max;
	int count;
	TNode* array;
public:
	TArray();
	TArray(int _max);
	void Add(string _key);
	void Print();
	bool IsFull();
	bool IsEmpty();
	int Find(string s);
	void Delete(string s);
	friend class TSortedArray;
};