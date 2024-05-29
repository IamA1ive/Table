#pragma once
#include <string>
using namespace std;

class TNode {
	string key;
	int value;
public:
	TNode();
	friend class TArray;
	friend class TSortedArray;
};
