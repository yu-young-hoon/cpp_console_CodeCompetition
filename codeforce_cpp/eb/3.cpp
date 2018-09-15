#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;

using namespace std;

#define MAX 101

struct NUM_COUNT {
	int num;
	int count;
	NUM_COUNT(int n, int c) {
		num = n;
		count = c;
	}
};

long long solution(long long a, long long b)
{
	long long recursive = a;
	int r = 1;
	long long result = 0;

	while (recursive < 9999) {
		recursive *= a;
		r++;
	}
	result = recursive;
	for (int i = 0; i < b / r-1; ++i) {
		result = (result % 10000) * recursive;
	}
	for (int i = 0; i < b - (b / r) * r; ++i) {
		result = (result%10000) * a;
	}
	return result % 10000;
}

int main() {
	solution(123456789, 12345);

	return 0;
}