#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

#define MAX 300001

using namespace std;
// case���� �����Ϸ��� �Ͽ����� ���� ����
// ¦�� ���� �Ʒ� Ȧ�� ���� ���� ���� ������ ���� �������� �����Ҽ� �ְ�
// ��ȭ���� ����� DP�� ���
long long w, in[2][MAX], zig[MAX], sumR[MAX], sumRR[2][MAX];
int main() {
	
	cin >> w;

	for (int i = 0; i < w; ++i) cin >> in[0][i];
	for (int i = 0; i < w; ++i) cin >> in[1][i];

	for (int i = 1; i < w; ++i) {
		zig[i] = zig[i - 1] 
			+ in[(i+1) & 1][i - 1] * (i * 2 - 2) 
			+ in[i & 1][i - 1] * (i * 2 - 1);
		sumR[w - i] = sumR[w - i +1] + in[0][w - i] + in[1][w - i];
	}


	for (int i = w-1; i >= 0; --i) {
		sumRR[0][i] = sumRR[0][i + 1] - sumR[i + 1] + in[0][i] * (w * 2 - 1) + in[1][i] * (i*2); // ��
		sumRR[1][i] = sumRR[1][i + 1] - sumR[i + 1] + in[0][i] * (i * 2) + in[1][i] * (w * 2 - 1); // �Ʒ�
	}

	long long ans = 0;
	for (int i = 0; i < w; ++i) {
		long long newAns = zig[i] + sumRR[(i + 1) & 1][i];
		// cout << newAns << endl;
		ans = max(ans, newAns);
	}

	cout << ans;
	
	return 0;
}