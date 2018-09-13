#include <iostream>
#include <stdio.h>

#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

using namespace std;

int main() {
	long long strLength;
	long long removeCount;
	string text = "";
	char a;

	vector<int> textV;
	cin >> strLength >> removeCount;

	for (int i = 0; i <= 'z' - 'a'; ++i) {
		textV.push_back(0);
	}
	
	for (int i = 0; i < strLength; ++i) {
		cin >> a;
		textV[a - 'a']++;
		text.push_back(a);
	}

	int removeTextEnd;
	int forRemoveCount = 0;

	for (int j = 0 ; j < textV.size(); ++j) { // a 부터 개수
		forRemoveCount += textV[j];
		if (removeCount <= forRemoveCount) {
			textV[j] -= forRemoveCount - removeCount;
			removeTextEnd = j;
			break;
		}
	}

	for (int i = 0; i < strLength; ++i) {
		if (text[i] - 'a' <= removeTextEnd) {
			textV[text[i] - 'a']--;
			if (textV[removeTextEnd] == 0) {
				removeTextEnd--;
			}
		}
		else {
			cout << text[i];
		}
	}

	return 0;
}