#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

using namespace std;

int main() {
	vector<vector<pair<int, int>>> v;
	int count;
	cin >> count;

	for (int i = 0; i < count; ++i) {
		int x, y;
		cin >> x >> y;
		for (vector<vector<pair<int, int>>>::iterator it = v.begin(); it != v.end(); ++it) {
			if ((*it).back().first == y) {
				(*it).insert((*it).begin(), pair<int, int>(x, y));
			}
			if ((*it).back().second == x) {
				(*it).push_back(pair<int, int>(x, y));
			}
			if ((*it).front().first == (*it).back().second) {
				return cout << "true",0;
			}
		}
		vector<pair<int, int>> newv;
		newv.push_back(pair<int, int>(x, y));
		v.push_back(newv);
	}
	return cout << "false", 0;
}