#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;

using namespace std;

// 6가지의 경우가 나오는데 앞뒤 순서로 누적으로 4개로 경우를 줄여서 풀었음.
// 아래는 나오는 횟수 구하고 순서 상관없이 3개 경우를 구해서 계산하는 방식
// 00 * 11
// 01 * 01
// 10 * 00 
//  F0R(i, n) {
//	    co[2 * (a[i] - '0') + (b[i] - '0')] ++;
//  }
//  cout << co[3] * co[0] + co[2] * co[1] + co[2] * co[0];

ll caseCount[4][XX];
int main() {
	ll c;
	string in1, in2;
	ll result = 0;
	cin >> c >> in1 >> in2;

	for (ll i = c-1; i >= 0; --i) {
		caseCount[0][i] = caseCount[0][i + 1];
		caseCount[1][i] = caseCount[1][i + 1];
		caseCount[2][i] = caseCount[2][i + 1];
		caseCount[3][i] = caseCount[3][i + 1];

		if (in1[i] == '0' && in2[i] == '0')
			caseCount[0][i]++;
		if (in1[i] == '0' && in2[i] == '1')
			caseCount[1][i]++;
		if (in1[i] == '1' && in2[i] == '1')
			caseCount[2][i]++;
		if (in1[i] == '1' && in2[i] == '0')
			caseCount[3][i]++;

		if (i == c - 1)
			continue;

		if (in1[i] == '0' && in2[i] == '0')
			result += caseCount[2][i + 1] + caseCount[3][i + 1];
		if (in1[i] == '0' && in2[i] == '1')
			result += caseCount[3][i + 1];
		if (in1[i] == '1' && in2[i] == '1')
			result += caseCount[0][i + 1];
		if (in1[i] == '1' && in2[i] == '0')
			result += caseCount[0][i + 1] + caseCount[1][i + 1];
	}
	cout << result;
	return 0;
}