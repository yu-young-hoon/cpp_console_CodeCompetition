#include <iostream>
#include <stdio.h>

#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

using namespace std;
//reverse라는 함수가 있었음...
int main() {
	long long c;
	string text;
	vector<int> divisors;
	int divisor = 2;

	cin >> c >> text;
	
	for (long long i = 2; i * i <= c; i++) {
		if (c % i == 0) {
			divisors.push_back(i);
			if (i != c / i) 
				divisors.push_back(c / i);
		}
	}

	sort(divisors.begin(), divisors.end());

	for (int i = 0; i < divisors.size() ; ++i) {
		string a = text.substr(0, divisors[i]);
		string b = text.substr(divisors[i]);
		for (int j = 0; j < divisors[i]; ++j) {
			b = a[j] + b;
		}
		text = b;
	}

	for (int i = text.size(); i > 0 ; --i) {
		cout << text[i - 1];
	}

	return 0;
}