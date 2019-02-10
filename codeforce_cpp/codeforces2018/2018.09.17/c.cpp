#ifdef WIN32
#include "..\\..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;

using namespace std;

int main() {
#ifdef WIN32
	ifstream in("in.txt");
	streambuf *cinbuf = cin.rdbuf();
	cin.rdbuf(in.rdbuf());
#endif
	ll c;
	cin >> c;
	vector<ll> ins;
	ll inv;
	ll zero = 0;
	ll minus = 0;

	ll least = 99999999;
	for (ll i = 0; i < c; ++i) { // 입력, 0 개수, 음수 개수
		cin >> inv;
		ins.push_back(inv);
		if (inv == 0)
			zero++;
		if (inv < 0)
			minus++;
		least = min(least, inv); // 제일 작은 값
	}

	// remove zero
	bool a = true;
	string result = "";
	vector<ll>::iterator it = ins.begin();
	vector<ll>::iterator its = ins.begin();
	for (it = find(it, ins.end(), 0); it != ins.end(); it = find(it+1, ins.end(), 0)) {
		if (a) {
			stringstream ss;
			ss << "1 ";
			ss << it - ins.begin() + 1;
			result.append(ss.str());
			a = !a;
		}
		else {
			stringstream ss;
			ss << " ";
			ss << it - ins.begin() + 1;
			result.append(ss.str());
			cout << result << endl;
			result.clear();
			stringstream ss2;
			ss2 << "1 ";
			ss2 << it - ins.begin() + 1;
			result.append(ss2.str());
		}
		its = it;
	}

	// remove once if minus odd
	if (minus % 2 == 1) {
		if (zero > 0) {
			vector<ll>::iterator it3 = find(ins.begin(), ins.end(), least);
			cout << 1 << " " << it3 - ins.begin() + 1 << " " << its - ins.begin() + 1  << endl;
			cout << 2 << " " << its - ins.begin() + 1 << endl;
		} else {
			vector<ll>::iterator it3 = find(ins.begin(), ins.end(), least);
			cout << 2 << " " << it3 - ins.begin() + 1 << endl;
			*it3 = 0;
		}
	}
	else {
		if (zero > 0)
			cout << 2 << " " << its - ins.begin() + 1 << endl;
	}

	a = true;
	result.clear();
	for (ll i = 0; i < c; ++i) {
		if (ins[i] != 0) {
			if (a) {
				stringstream ss;
				ss << "1 ";
				ss << i + 1;
				result.append(ss.str());
				a = !a;
			}
			else {
				stringstream ss;
				ss << " ";
				ss << i + 1;
				result.append(ss.str());
				cout << result << endl;
				result.clear();
				stringstream ss2;
				ss2 << "1 ";
				ss2 << i + 1;
				result.append(ss2.str());
			}
		}
	}

	return 0;
}