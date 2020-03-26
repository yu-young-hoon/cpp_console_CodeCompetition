#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

/*
ATM 인출 시간 더하기
*/

int main() {
#ifndef YH
	ifstream in("in.txt");
	streambuf *cinbuf = cin.rdbuf();
	cin.rdbuf(in.rdbuf());
#endif
    ll c, answer = 0, reduce = 0;
    multiset<ll> p;
    cin >> c;
    for (ll i = 0 ; i < c ; ++i) {
        ll bankTime;
        cin >> bankTime;
        p.insert(bankTime);
    }

    multiset<ll>::iterator itr = p.begin();
    for (itr ; itr != p.end() ; ++itr) {
        reduce += *itr;
        answer += reduce;
    }
    
    cout << answer;

	return 0;
}