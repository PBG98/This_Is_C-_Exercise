#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	// auto is a datatype that follow original datatype
	int a(10);
	auto b(a);

	cout << a << endl;
	cout << b << endl;

	return 0;
}