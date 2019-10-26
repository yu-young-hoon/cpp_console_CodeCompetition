#ifdef WIN32
#include "..\\..\\stdc++.h"
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
	string str;
	while (1) {
		getline(cin,str);
		if (str.size() == 0)
			return 0;
		cout << str<<endl;
	}

	return 0;
}