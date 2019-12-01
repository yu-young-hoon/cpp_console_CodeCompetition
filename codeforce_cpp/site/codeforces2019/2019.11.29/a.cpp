#include <bits/stdc++.h>

typedef long long ll;
using namespace std;
/*
	6
	1 1 1
	1 2 1
	4 1 1
	7 4 10
	8 1 4
	8 2 8
	사탕을 2개씩 최대 먹을수 있는 횟수
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
		ll a,b,c,result = 0;
		cin >> a>>b>>c;
		result = a+b+c;
		priority_queue<ll, vector<ll>, less<ll>> pq;
		pq.push(a);
		pq.push(b);
		pq.push(c);

		a = pq.top();
		pq.pop();
		b = pq.top();
		pq.pop();
		c = pq.top();
		pq.pop();
		
		ll mins = min(a-b, c);
		a -=mins;
		c -=mins;

		if (c!=0) {
			a -= (c/2) + c%2;
			b -= (c/2);
			c = 0;
		}
		mins = min(a, b);
		a -= mins;
		b -= mins;
		cout << (result - a -b -c)/2 << endl;
	}
	return 0;
}