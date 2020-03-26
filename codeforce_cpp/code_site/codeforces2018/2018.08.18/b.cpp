#ifdef WIN32
#include "..\\stdc++.h"
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
	ll p, q;
	cin >> p >> q;

	for (int i = 0; i < q; ++i) {
		//for (int j = 0; j < p; ++j) {
			ll h, w;
			cin >> h >> w;
			//h = i+1;
			//w = j+1;
			ll result = 0;
			if ((h + w) % 2)
				result += p*p/2 + p%2;

			if ((h + w) % 2)
				result += (h - 1)*(p / 2) + (w + (h - 1) % 2) / 2 + (p % 2)*((h - 1) / 2);
			else
				result += (h - 1)*(p / 2) + (w + (h) % 2) / 2 + (p % 2)*((h) / 2);

			cout << result << endl;
		//}
		
	}

	return 0;
}