#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void Swap(int& a, int& b)
{
	int nTemp(0);

	nTemp = a;
	a = b;
	b = nTemp;

}

int _tmain(int argc, _TCHAR* argv[])
{
	int x, y;
	cout << "x : ";
	cin >> x;

	cout << "y : ";
	cin >> y;

	cout << endl;

	Swap(x, y);
	cout << x << ' ' << y << endl;

	return 0;
}