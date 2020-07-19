#ifdef WIN32 
#include "..\\..\\..\\stdc++.h"
#elif __APPLE__
#include "../../../stdc++.h"
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;
using namespace std;

int main() {
#ifdef YH
	ifstream in("in.txt");
	streambuf *cinbuf = cin.rdbuf();
	cin.rdbuf(in.rdbuf());
#endif
    int a, b;
    while (cin >> a >> b)
    {
        cout << a + b << endl;
    }
	return 0;
}