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
	int l = 0; // ����
	int r = N - 1; // ������
	while (A[l] == X) { //�����̶� �������̶� ������������
		int m = (l + r) / 2; // �߾Ӱ�
		if (A[m] >= X) { // �߾��� ã�°� ���� ũ�ٸ�
			r = m - 1; // �������� �߾Ӻ��� 1�۰�
		}
		else { //�߾��� ã�°ź��� �۰ų� ������
			l = m; // ������ �߾�����
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
