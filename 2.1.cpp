#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0)); 
	cout << "the dice rolled " << 1 + rand() % 6 << " and " << 1 + rand() % 6 << endl;
    return 0;
}

