#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

using namespace std;

int main() {
	long long money;
	long long count = 0;
	cin >> money;

	count += (money / 100);
	count += ((money % 100 )/ 20);
	count += ((money % 20) / 10);
	count += ((money %10)/5);
	count += money%5;

	cout << count;
	
	return 0;
}