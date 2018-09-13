#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

using namespace std;

int main() {
	long long c;
	long long count = 0;
	cin >> c;
	vector<long long> a(c);
	vector<long long> b(c);

	for (int i = 0; i < c; ++i) {
		cin >> count;
		
		vector<long long>::iterator abc = find(a.begin(), a.end(), count);

		if (abc != a.end()) {
			long long aaaa = std::distance(a.begin(), abc);
			b[aaaa]++;
		}
		else {
			a.push_back(count);
			b.push_back(1);
		}

			
	}
	int mostc = 0;

	for(long long bb : b) {
		if (mostc <= bb) {
			mostc = bb;
		}
	}
	cout << mostc;

	return 0;
}