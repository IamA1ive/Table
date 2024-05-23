#pragma once
#include <iostream>
#include "TNode.h"
#include "TListNode.h"
using namespace std;

class TList {
	int max;
	int count;
	TListNode* pFirst;
public:
	TList();
	TList(int _max);
	void Add();
	void Print();
	bool IsFull();
	bool IsEmpty();
	int Find(string s);
	void Delete(string s);
};