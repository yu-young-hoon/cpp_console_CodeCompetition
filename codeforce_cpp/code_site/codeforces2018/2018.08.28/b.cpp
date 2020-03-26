#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;

using namespace std;

int main() {
#ifdef WIN32
	ifstream in("in.txt");
	streambuf *cinbuf = cin.rdbuf();
	cin.rdbuf(in.rdbuf());
#endif
	// 트릭 111 + 889 = 1000, a b 보다 크고 a+b는 무조건 1
	cout << string(2230, '1') << '\n' << string(2229, '8')<<9;
	
	return 0;
}