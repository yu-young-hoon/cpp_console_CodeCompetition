#include <iostream>

using namespace std;

int main() {
	int t;
	char currentS[1000] = { 0, };
	char st[100][1000] = { 0, };
	int si[100][2] = { 0, };

	cin >> t;
	for (int i = 0 ; i < t ; ++i) {
		cin >> currentS;
		for (int j = 0; j < 1000; ++j) {
			if (currentS[j] == 0)
				break;
			

			for (int k = 0; k < 100; ++k) {
				if (si[k][0] != 0) { // ���̿� �´� ù����
					si[k][0] = i + 1;
					si[k][1]++;
					*(st[k]) = *currentS;
					break;
				}
				if (si[k][0] == i + 1) { //���̿� �´� �ι�°����
					si[k][1]++;

					if(st[k])
					break;
				}
			}
		}
	}


	return 0;
}