//ндхм ббнд дкъ бяеу рюакхж
//онхяй он йкчвс дкъ бяеу рюакхж
//сдюкемхе дкъ бяеу рюакхж
//пюглеп рюакхж лнфер ашрэ пюгмшл, рн еярэ
//б ндмс рюакхжс гюохяэ лнфер оноюярэ, ю б дпсцсч мер
#include <iostream>
#include <locale.h>
#include "TNode.h"
#include "TArray.h"
#include "TSortedArray.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	system("chcp 1251");
	TSortedArray A(5);

	A.Add();


	A.BinSearch("Anna");
	A.Delete("Bob");
	A.Print();

	return 0;
}
