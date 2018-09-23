#ifdef WIN32
#include "..\\..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;

using namespace std;
ll ans[3] = {1,1,1};
int main() {
#ifdef WIN32
	ifstream in("in.txt");
	streambuf *cinbuf = cin.rdbuf();
	cin.rdbuf(in.rdbuf());
#endif
	ll c;
	cin >> c;

	cout << 1 <<" "<< 1 + (((c-2)%3 ==0)?1:0) << " " << c-2- (((c - 2) % 3 == 0)?1:0);

	return 0;
}