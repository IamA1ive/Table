#pragma once
#include <iostream>
#include "TNode.h"
using namespace std;

class TList {
	int max;
	int count;
	TNode* pFirst;
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