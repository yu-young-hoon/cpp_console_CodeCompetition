#include "..\\stdc++.h"

using namespace std;

void solution(vector<int> &A) {
	int result = 1;

	sort(A.begin(), A.end(), [](const int& a, const int& b) {
		if (a<b)
			return true;
		else
			return false;
	});

	for (int i = 0; i < A.size(); ++i)
	{
		if (result == A[i]) {
			result++;
		}
	}
	cout << result;
}

int main()
{
	vector<int> nums;
	nums.push_back(2);
	nums.push_back(1);
	nums.push_back(3);
	nums.push_back(4);
	nums.push_back(5);


	solution(nums);


	return 0;
}
