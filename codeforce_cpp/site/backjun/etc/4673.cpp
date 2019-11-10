#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/*
셀프 넘버 - 소수
n, d(n), d(d(n)), d(d(d(n)))
d(n)을 n과 n의 각 자리수를 더하는 함수라고 정의하자. 예를 들어, d(75) = 75+7+5 = 87
10000보다 작거나 같은 셀프 넘버를 한 줄에 하나씩 출력하는 프로그램을 작성하시오.
*/

int main() {
#ifndef NDEBUG
	ifstream in("in.txt");
	streambuf *cinbuf = cin.rdbuf();
	cin.rdbuf(in.rdbuf());
#endif
	multiset<int> noInit;

	for (int i = 1; i < 10000; ++i) {
		string stringInt = to_string(i);
		int sumInt = i;
		for (char& c : stringInt) {
			sumInt += c - '0';
		}
		noInit.insert(sumInt);
	}

	for (int i = 1; i < 10000; ++i) {
		multiset<int>::iterator it = noInit.find(i);
		if (it == noInit.end()) {
			cout << i << endl;
		}
	}

	return 0;
}