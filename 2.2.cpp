#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

long long fib(int n) {
	int a = 1, b = 0;
	for (int i = 1; i < n; i++) {
		int temp = a;
		a = a + b;
		b = temp; 
	}
	return a;
}

int main()
{
	int n;
	cin >> n;
	cout << fib(n) << endl;
}

