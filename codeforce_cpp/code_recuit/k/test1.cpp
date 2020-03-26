#include "..\\stdc++.h"
#include <stdio.h>

using namespace std;

struct NUM_AND_COUNT
{
	int NUM;
	int COUNT;
};

// Complete the cardinalitySort function below.
vector<int> cardinalitySort(vector<int> nums) {
	vector <NUM_AND_COUNT> result; // ������ ����
	int bitCount; // ��Ʈ ���� ���ϱ� ����

	if (nums[0] == 1) { // �Ѱ��� �˻��� �ʿ� ���� ���
		int resultOneNum = nums[1];
		nums.clear();
		nums.push_back(resultOneNum);
		return nums;
	}

	for (int i = 1; i < nums.size(); ++i) {
		bitCount = 0;
		for (int j = 19; j >= 0; --j) { // 10^6 20�ڸ�
			if (((nums[i] >> j) & 1) == 1) { // �˻� ��Ʈ�� 1�̸� ���� ���ϱ�
				++bitCount;
			}
		}
		NUM_AND_COUNT currentNum;
		currentNum.NUM = nums[i];
		currentNum.COUNT = bitCount;
		result.push_back(currentNum);
	}

	sort(result.begin(), result.end(), [](const NUM_AND_COUNT& a, const NUM_AND_COUNT& b) {
		if (a.COUNT < b.COUNT) // ��Ʈ ���� ��
			return true;
		else if (a.COUNT == b.COUNT && a.NUM < b.NUM) // ���� ��
			return true;
		else
			return false;
	});

	nums.clear();

	for (int i = 0; i < result.size(); ++i) {
		nums.push_back(result[i].NUM);
	}

	return nums;
}

int main()
{
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(4);
	nums.push_back(5);

	vector<int> res = cardinalitySort(nums);

	for (int i = 0; i < res.size(); i++) {
		cout << res[i];

		if (i != res.size() - 1) {
			cout << "\n";
		}
	}

	cout << "\n";


	return 0;
}
