#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;

using namespace std;

#define MAX 101

struct NUM_COUNT {
	int num;
	int count;
	NUM_COUNT(int n, int c) {
		num = n;
		count = c;
	}
};

vector<int> solution(vector<string> students) {
	vector<int> answer;
	vector<NUM_COUNT> studentCount;
	for (int i = 0; i < students.size(); ++i) {
		int sum = 10;
		int adsent = 0;
		bool lazz = false;
		for (int j = 0; j < 10; ++j) {
			if (students[i][j] == 'A')
				sum++;
			if (students[i][j] == 'L') {
				if (lazz) {
					adsent++;
					sum--;
				}
				lazz = !lazz;
			}
			if (students[i][j] == 'P') {
				adsent++;
				sum--;
			}

			if (adsent >= 3) {
				sum = 0;
				break;
			}
		}
		studentCount.push_back(NUM_COUNT(i + 1, sum));
	}

	sort(studentCount.begin(), studentCount.end(), [](const NUM_COUNT& a, const NUM_COUNT& b) {
		if (a.count > b.count)
			return true;
		else if(a.count == b.count && a.num < b.num)
			return true;
		return false;
	});

	for (int i = 0; i < studentCount.size(); ++i) {
		answer.push_back(studentCount[i].num);
	}

	return answer;
}

int main() {
	vector<string> students;
	students.push_back("AAALLLAPAA");
	students.push_back("AAAAAAAPPP");
	students.push_back("ALAAAAPAAA");
	
	solution(students);

	return 0;
}