#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;

using namespace std;

int main(){
	string count;
	getline(std::cin, count);
	ll c = stoll(count, 0, 0);
	vector<ll> vt;
	multiset<ll> ms;

	string v;
	while(getline(std::cin, v)) {
		if (v.empty()) {
			break;
		}
		ll longv = stoll(v, 0, 0);
		ms.insert(longv);
		vt.push_back(longv);
		if (c < vt.size()) {
			cout << *(ms.rbegin()) << endl;
			multiset<ll>::iterator it = ms.find(vt.front());
			if (it != ms.end()) {
				ms.erase(it);
			}
			vt.erase(vt.begin());
		}
	}
	return 0;
}