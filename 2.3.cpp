#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

int iwishihadfriends(int n) {
	int sum = 0;
	for (int i = 1; i < n; i++) {
		if (n%i == 0) sum += i;
	}
	return sum;
}
//it takes a while
int main()
{
	for (int first = 1; first < 10000; first++) {
		for (int second = first + 1; second < 10000; second++) {
			if ((iwishihadfriends(first) == second) && (iwishihadfriends(second) == first)) cout << first << ' ' << second << endl;
		}
	}
}
