#include "..\\stdc++.h"

using namespace std;

// 2�� ������ �������� ���ٸ� ������
// �������� ���ٸ� 1�� ����, 0�� �ɶ�����
int solution(string &S) { // 2�� ���ڿ�
	int i = 0;
	int length = S.length();
	int result = 0;

	for (i; i < length; ++i) {
		if (result == 0 && S[i] == '1') { // ���� ū �ڸ����� 2�� ������ ����
			result = length - i - 1;
		}
		if (S[i] == '1') { // ���Ŀ� ���� ���� Ƚ���� �� ����
			result++;
		}
	}
	return result;
}

int main()
{
	string input = "011100";

	assert(solution(input), 7);

	return 0;
}
