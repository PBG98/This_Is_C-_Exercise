#include "stdafx.h"
#include <iostream>
#include <string>

int _tmain(int argc, _TCHAR* argv[])
{
	std::string szName;
	int nAge;

	std::cout << "What is your name?" << std::endl;
	std::cin >> szName;

	std::cout << "How old are you?" << std::endl;
	std::cin >> nAge;

	std::cout << "My name is " << szName << ", and I am " << nAge << std::endl;

	
	return 0;
}