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
    string line;
    for (ll i = 0 ; i < cnt ; ++i) {
        ll a, b;
        cin >> line;
        size_t pos = line.find(",");
        string aa = line.substr(0, pos);
        string bb = line.substr(pos + 1, line.length());
        cout << stoi(aa) + stoi(bb) << endl;
    }
	return 0;
}
