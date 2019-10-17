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

    ll maxWeight, c, manWeight;
    multiset<ll> mans, ships;

    cin >> maxWeight >> c;

    for (ll i = 0; i < c ; ++i) {
        cin >> manWeight;
        if (manWeight > maxWeight) {
            return cout << -1,0;
        }
        mans.insert(manWeight);
    }

    multiset<ll>::reverse_iterator rit = mans.rbegin();
    for (rit ; rit != mans.rend(); ++rit) {
        ll tman = *rit;
        bool isInsert = false;
        multiset<ll>::reverse_iterator srit = ships.rbegin();
        for (srit ; srit != ships.rend(); ++srit) {
            ll tship = *srit;
            if (tship + tman <= maxWeight) {
                ships.insert(tman + tship);
                ships.erase(ships.find(tship));
                isInsert = true;
                break;
            }
        }
        if (!isInsert) {
            ships.insert(tman);
        }
    }
    return cout << ships.size(),0;
}
