#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

using namespace std;

int main() {
	long long a = 0;
	long long b = 0;
	long long c = 0;
	long long ab = 0;
	cin >> a >> b >> c;
	ab = a + b;
	vector <long long> s(c+1);

	

	if (a > b) { // 시작이 0 으로
		for (int i = 0; i < ab; ++i) {
			if (i % 2 == 0 && a > 0) {
				a--;
				s[i % s.size()]++;
			}
			else if (i % 2 == 1 && b > 0) {
				b--;
				s[i % s.size()]++;
			}
			else if(a > 0)
			{
				a--;
				s[0]++;
			}
			else if (b > 0)
			{
				b--;
				s[1]++;
			}
		}
		for (int i = 0; i < s.size(); ++i) {
			for (int j = 0; j < s[i]; ++j) {
				if (i % 2 == 0) {
					cout << 0;
				}
				else {
					cout << 1;
				}
			}
		}
	}
	else { // 시작이 1로
		for (int i = 0; i < ab; ++i) {
			if (i % 2 == 0 && b > 0) {
				b--;
				s[i % s.size()]++;
			}
			else if (i % 2 == 1 && a > 0) {
				a--;
				s[i % s.size()]++;
				
			}
			else if (a > 0)
			{
				a--;
				s[1]++;
			}
			else if (b > 0)
			{
				b--;
				s[0]++;
			}
		}
		for (int i = 0; i < s.size(); ++i) {
			for (int j = 0; j < s[i]; ++j) {
				if (i % 2 == 0) {
					cout << 1;
				}
				else {
					cout << 0;
				}
			}
		}
	}

	return 0;
}