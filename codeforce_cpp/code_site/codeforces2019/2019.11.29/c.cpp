#include <bits/stdc++.h>

typedef long long ll;
using namespace std;
/*
4
5
11
1
3

4
0 1 2 5 
6
0 1 2 3 5 11 
2
0 1 
3
0 1 3 

0=⌊5/7⌋ , 1=⌊5/5⌋, 2=⌊5/2⌋, 5=⌊5/1⌋
*/
int main() {
#ifndef YH
	ifstream in("in.txt");
	streambuf *cinbuf = cin.rdbuf();
	cin.rdbuf(in.rdbuf());
#endif
	ll c;
	cin >> c;
	for (ll i = 0 ; i < c ; ++i) {
		ll ins;
		cin >> ins;
		ll ii=1;
		multiset<ll> m;
		m.insert(0);
		m.insert(1);
		while(true) {
			if (ins/ii == 1) {
				break;
			}
			if (m.find(ins/ii) == m.end()) {
				m.insert(ins/ii);
			}
			ii = ins / (ins/ii) + 1;
		}
		multiset<ll>::iterator itr = m.begin();
		cout << m.size()<< endl; 
		for (itr ; itr != m.end() ; ++itr) {
			cout << *itr<< " "; 
		}
		cout << endl; 
	}
	return 0;
}