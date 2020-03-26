#include "..\\stdc++.h"
#include <stdio.h>

using namespace std;

static string compressedString(string message) {
	vector <char> mVector;
	string result = "";
	for (int i = 0; i < message.size(); ++i) {
		if (mVector.size() == 0 || mVector[0] == message[i]) {
			mVector.push_back(message[i]);
			continue;
		}

		result.push_back(mVector[0]);
		result += ((mVector.size() > 1) ? to_string(mVector.size()) : "");
		mVector.clear();
		mVector.push_back(message[i]);
	}
	result.push_back(mVector[0]);
	result += ((mVector.size() > 1) ? to_string(mVector.size()) : "");
	return result;
}

int main()
{
	compressedString("abaabbbc");


	return 0;
}
