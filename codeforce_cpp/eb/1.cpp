#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;

using namespace std;

#define MAX 11

int d[MAX];

bool solution(int n)
{
	int length = 0;
	long long dd = 10;
	for (int i = 0; true; ++i) {
		d[i] = (n % dd) / (dd / 10);
		if (n < dd) {
			for (int j = 0; j < (i+1) / 2; ++j) {
				if (d[j] != d[i - j])
					return false;
			}
			break;
		}
		dd *= 10;
	}

	return true;
}

int main() {
#ifdef WIN32
	ifstream in("in.txt");
	streambuf *cinbuf = cin.rdbuf();
	cin.rdbuf(in.rdbuf());
#endif
	ll ar_count;
	cin >> ar_count;
	cout << solution(ar_count);

	return 0;
}