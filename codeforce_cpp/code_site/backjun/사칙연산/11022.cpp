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
    ll cnt;
    cin >> cnt;

    for (ll i = 0 ; i < cnt ; ++i) {
        ll a, b;
        cin >> a >> b;
        cout << "Case #" << i+1 << ": " << a << " + " << b << " = " << a + b << endl;
    }
	return 0;
}