#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

#include <time.h>
#include <stdio.h>

using namespace std;
// ������, ��, ���� �����, �� �����, �� ����

int solution(vector<int> &A, vector<int> &B, int M, int X, int Y) {
	int weight = 0;
	int man = 0;
	int beforFlo = 0;
	int count = 0;
	while (A.size() != 0) {
		if (A.front() + weight < Y && man < X) { // ���԰� ������ �߰�
			weight += A.front(); // ���Կ� �߰�
			A.erase(A.begin());
			if (beforFlo != B.front()){
				beforFlo = B.front();
				count++;
			}
			B.erase(B.begin());
			man++;
		}
		else { // �ٴ����� ����������
			weight = 0;
			man = 0;
			beforFlo = 0;
			count++;
		}
	}
	count++; // ������ 1������
	return count;
}

int main()
{
	vector<int> a;
	a.push_back(60);
	a.push_back(80);
	a.push_back(40);

	vector<int> b;
	b.push_back(2);
	b.push_back(3);
	b.push_back(5);

	solution(a,b,5,2,200);

	return 0;
}
