#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

using namespace std;
struct NUM_COUNT {
	int num = 0;
	int count = 0;
	int m = 0;
	NUM_COUNT(int n, int c) {
		num = n;
		count = c;
	}
};

int main() {
	// 식량 큰순서대로 정렬하고 가장큰 식량에서 사람 수 줄여가면서 구하려고 했음... 6케이스에서 실패
	int man, foodCount;
	vector<NUM_COUNT> foods;
	int in;
	cin >> man >> foodCount;
	int day = 0;
	for (int i = 0; i < foodCount; ++i) {
		cin >> in;
		for (int j = 0; j < foods.size(); ++j) {
			if (foods[j].num == in) {
				foods[j].count++;
				in = 0;
				break;
			}
		}
		if (in != 0)
			foods.push_back(NUM_COUNT(in ,1));
	}

	sort(foods.begin(), foods.end(), [](const NUM_COUNT& a, const NUM_COUNT& b) {
		if (a.count > b.count)
			return true;
		else
			return false;
	});
	foods[0].m = man;
	for (int i = 1; i < man; ++i) {
		for (int j = 1; j < foods.size(); ++j) {
			if (foods[j - 1].m == foods[j].m + 1 || foods[j - 1].m == 0)
				continue;
			int be = foods[j - 1].count / foods[j - 1].m;
			if (foods[j].count / (foods[j].m + 1) >= be) {
				foods[j].m++;
				foods[j - 1].m--;
			}
		}
	}
	cout << foods[0].count / foods[0].m;


	// 날짜로 식량을 나눈걸 더했을때 사람수보다 많이 나올때가 나오면 정답
	/*const int N = 105;

	int n, m;

	int cnt[N];*/
	//scanf("%d%d", &n, &m);
	//for (int i = 0; i < m; ++i) {
	//	

	//	int a;
	//	scanf("%d", &a);
	//	++cnt[a];
	//}
	//for (int i = 100; i >= 1; --i) {
	//	if (i == 4)
	//		cout << "a";
	//	int tot = 0; // 
	//	for (int j = 0; j < N; ++j) {
	//		tot += cnt[j] / i;
	//	}
	//	if (tot >= n) {
	//		printf("%d\n", i);
	//		return 0;
	//	}
	//}
	//printf("0\n");
	//return 0;


	return 0;
}