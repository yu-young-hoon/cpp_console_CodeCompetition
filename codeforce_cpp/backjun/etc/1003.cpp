#include "..\\stdc++.h"

using namespace std;

int fib(int i, int &a, int &b);

int main() {
	int t,i;
	int a=0, b=0;
	//cin >> t;
	/*for (int i = 0; i < t; ++i) {
		a = 0;
		b = 0;
		cin >> i;
		fib(i, a, b);
		cout << a << " " << b << endl;
	}*/
	a = 2;
}

int fib(int i, int &a, int &b) {
	if (i < 2) {
		if (i == 0)
			a++;
		else
			b++;
		return i;
	}
	else {
		return fib(i - 2,a,b) + fib(i - 1,a,b);
	}
}