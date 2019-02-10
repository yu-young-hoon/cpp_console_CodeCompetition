#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

using namespace std;
struct cup{
	int l = 0; // 왼쪽 순서번호
	int r = 0; // 오른쪽 순서번호
};
int main() {
	//int count;
	//
	//int swap = 0;
	//cin >> count;
	//vector<cup> pea(count);
	//vector<int> peal; // 커플 리스트
	//for (int i = 0; i < count * 2; ++i) {
	//	int a;
	//	cin >> a;
	//	if (pea[a-1].l == 0)
	//		pea[a-1].l = i;
	//	else
	//		pea[a-1].r = i;
	//	peal.push_back(a);
	//}

	//for (int i = 0; i < count; ++i) {
	//	int m = abs(pea[i].l - pea[i].r);
	//	if (m == 1)
	//		continue;
	//	else {
	//		if (pea[i].l > pea[i].r) {
	//			int tem = pea[i].l;
	//			pea[i].l = pea[i].r;
	//			pea[i].r = tem;
	//		}
	//		for (int j = 0; j < m - 1; ++j) {
	//			swap++;
	//			int chanNum = pea[i].l + 1; // 바꿀 사람 순서번호
	//			int chancuNum = peal[chanNum]-1; // 바꿀 커플 번호

	//			peal[pea[i].l] = chancuNum+1; // 바꾸는 쪽에 바꿀
	//			peal[pea[i].l + 1] = i+1;

	//			if (pea[chancuNum].l == chanNum) {
	//				pea[chancuNum].l--;
	//			}
	//			else {
	//				pea[chancuNum].r--;
	//			}
	//			pea[i].l++;
	//		}
	//	}
	//}
	//cout << swap;

	int n;
	cin >> n;
	vector<int> arr(n * 2); // 정보
	vector<int> pre(n + 1, -1); // 움직일 거리
	long long ans = 0;
	for (int i = 0; i < 2 * n; ++i)
	{
		cin >> arr[i]; //입력
		if (pre[arr[i]] != -1) // 움직임 계산
		{
			int x = pre[arr[i]]; // 커플번호
			for (int j = i - 1; j >x; --j) // 지금까지 나온것 검사
			{
				++ans; // 움직임 숫자더하기
				swap(arr[j + 1], arr[j]);
				pre[arr[j + 1]]++;
			}
		}
		else
			pre[arr[i]] = i;
	}
	cout << ans;

	return 0;
}