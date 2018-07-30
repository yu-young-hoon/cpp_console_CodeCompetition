#include <iostream>
#include <stdio.h>

#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

using namespace std;

int main() {
	int c;
	int un;
	int in;
	int count = 0;

	vector<int> ints;

	cin >> c >> un;

	for (int i = 0; i < c; ++i)
	{
		cin >> in;
		ints.push_back(in);
	}
	for (int i = 0; i < c; ++i)
	{
		if (un >= ints[i]) {
			count++;
		}
		else {
			break;
		}
	}
	if (count != c) {
		for (int i = c; i > 0; --i)
		{
			if (un >= ints[i - 1]) {
				count++;
			}
			else {
				break;
			}
		}
	}

	cout << count;

	return 0;
}