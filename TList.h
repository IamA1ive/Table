#pragma once
#include <iostream>
#include "TListNode.h"
using namespace std;

class TList {
	int max;
	int count;
	TListNode* pFirst;
public:
	TList();
	TList(int _max);
	void Add(string _key);
	void Print();
	bool IsFull();
	bool IsEmpty();
	bool Find(string _key);
	void Delete(string _key);
};

