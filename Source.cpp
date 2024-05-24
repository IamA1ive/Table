//ндхм ббнд дкъ бяеу рюакхж
//онхяй он йкчвс дкъ бяеу рюакхж
//сдюкемхе дкъ бяеу рюакхж
//пюглеп рюакхж лнфер ашрэ пюгмшл, рн еярэ
//б ндмс рюакхжс гюохяэ лнфер оноюярэ, ю б дпсцсч мер
#include "TArray.h"
#include "TList.h"
#include "TListNode.h"
#include "TNode.h"
#include "TSortedArray.h"
#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	TList A(3);

	cout << A.IsEmpty();

	A.Add();
	cout << A.IsEmpty();
	cout << A.IsFull();
	return 0;
}
