#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

#include <time.h>
#include <stdio.h>

using namespace std;

int solution(vector<int>& A, int X) {
	int N = A.size();
	if (N == 0) {
		return -1;
	}
	int l = 0; // 왼쪽
	int r = N - 1; // 오른쪽
	while (A[l] == X) { //왼쪽이랑 오른쪽이랑 같아질때까지
		int m = (l + r) / 2; // 중앙값
		if (A[m] >= X) { // 중앙이 찾는것 보다 크다면
			r = m - 1; // 오른족을 중앙보다 1작게
		}
		else { //중앙이 찾는거보다 작거나 같을때
			l = m; // 왼쪽을 중앙으로
		}
	}
	if (A[l] == X) {
		return l;
	}
	return -1;
}


int main()
{
	vector<int> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(5);
	a.push_back(9);

	assert(solution(a, 5) == 2);

	return 0;
}
