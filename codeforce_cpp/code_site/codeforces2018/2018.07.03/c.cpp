#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

using namespace std;

int main() {
	int count;
	int minCount;
	double merge = 0;
	double mergec = 0;
	cin >> count >> minCount;

	vector <int> tem(count);
	int temp;
	for (int i = 0; i < count; ++i) {
		cin >> temp;
		int m = i+1;
		if (m > minCount)
			m = minCount;
		if (count - minCount - i < 0) {
			m += count - minCount - i;
		}
		mergec += m;
		merge += m * temp;
	}
	cout.precision(15);
	cout<< (double)(merge / mergec);

	return 0;
}