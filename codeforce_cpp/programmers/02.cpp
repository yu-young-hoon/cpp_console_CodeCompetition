#if defined(WIN32) | defined(__APPLE__)
#ifdef WIN32
#include "..\\stdc++.h"
#endif
#ifdef __APPLE__
#include "../stdc++.h"
#endif
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;

using namespace std;

int main() {
#if defined(WIN32) | defined(__APPLE__)
#ifdef WIN32
	ifstream in("in.txt");
#endif
#ifdef __APPLE__
	ifstream in("../in.txt");
#endif
	streambuf *cinbuf = cin.rdbuf();
	cin.rdbuf(in.rdbuf());
#endif

    string inValue;
    cin >> inValue;
    if (inValue.size() == 1) {
        cout << ((inValue[0] - '0') - 1) * 91 << endl;
    }
        
    if (inValue.size() == 2) {
        ll rr =  ((inValue[0] - '0') - 1) * 91;
        rr += (inValue[1] - '0') * 10 - 10;
        cout << rr + 1 <<endl;
    }

    if (inValue.size() == 3) {
        ll rr =  ((inValue[0] - '0') - 1) * 91;
        rr += (inValue[1] - '0') * 10 - 10;
        rr += inValue[2] - '0';
        cout << rr + 1 <<endl;
    }
}
// 35
