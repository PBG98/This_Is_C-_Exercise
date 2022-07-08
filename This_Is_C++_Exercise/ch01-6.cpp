#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int aList[5] = { 30, 50, 10, 40, 20 };

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			if (aList[i] < aList[j])
			{
				int nTemp(0);
				nTemp = aList[i];
				aList[i] = aList[j];
				aList[j] = nTemp;
			}
		}
	}

	for (auto& n : aList)
		cout << n << ' ';

	return 0;
}