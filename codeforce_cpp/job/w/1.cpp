#include "..\\stdc++.h"

using namespace std;

// 2로 나눠서 나머지가 없다면 나누고
// 나눌수가 없다면 1을 빼기, 0이 될때까지
int solution(string &S) { // 2진 문자열
	int i = 0;
	int length = S.length();
	int result = 0;

	for (i; i < length; ++i) {
		if (result == 0 && S[i] == '1') { // 가장 큰 자릿수의 2에 제곱근 숫자
			result = length - i - 1;
		}
		if (S[i] == '1') { // 그후에 나올 빼기 횟수가 될 숫자
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
