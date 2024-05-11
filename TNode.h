#pragma once
#include <iostream>
#include <string>
using namespace std;

class TNode {
	string key;
	int value;
public:
	TNode();
	//TNode(string _key);
	friend class TArray;
	friend class TSortedArray;
};