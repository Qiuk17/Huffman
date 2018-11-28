#include "HuffmanTree.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	std::string text;
	cin >> text;
	HuffmanTree ht(text.c_str(), text.length());
	ht.printCode();
	auto es = ht.encrypt();
	es.print();

	system("pause");
    return 0;
}

