#pragma once
#include <string>
using namespace std;

class TListNode {
	string key;
	int value;
	TListNode* pNext;
public:
	TListNode();
	friend class TList;
};
