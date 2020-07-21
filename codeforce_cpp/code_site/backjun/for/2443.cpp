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
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	
    int cnt;
    cin >> cnt;
    for (int i = cnt ; i > 0 ; --i) {
        for (int j = 0 ; j < cnt - i ; ++j) cout << " ";
        for (int j = 0 ; j < 1 + (i-1) * 2 ; ++j) cout << "*";
        cout << "\n";
    }
	return 0;
}
