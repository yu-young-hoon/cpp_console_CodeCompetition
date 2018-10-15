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
	// ��, ��
	ll a, b;
	cin >> a >> b;

	ll minR = a, maxR = 0;
	
	// �������� �� ���ݺ��� ũ�� �� ����
	minR = max(0LL, a - b * 2);
	
	// n * (n-1) / 2 �� ������ �þ� �������� �ִ� ������
	for (ll i = 0; i <= a; ++i) {
		if (i * (i - 1) - b * 2 >= 0)
		{
			maxR = a - i;
			break;
		}
	}

	cout << minR << " " << maxR << endl;

	return 0;
}