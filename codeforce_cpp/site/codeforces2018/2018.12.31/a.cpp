#ifdef __APPLE__
#include "../../stdc++.h"
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
	int y,b,r;
	int result = 1;
	cin >> y>>b>>r;
	do {
		if (y+1 <= b && y + 2 <= r)
			break;
		result++;
	} while (y--);
	cout << y*3+3;
	
	return 0;
}