#ifdef WIN32 
#include "..\\..\\..\\stdc++.h"
#elif __APPLE__
#include "../../stdc++.h"
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;
using namespace std;

int solutiond(vector<vector<int> > A, int j) {

	for (ll i = j + 1 ; A.size() ; ++i) {

		if (A[j][1] < A[i][0]) {
			cout << A[j][0] << " " << A[j][1] << "    "<< A[i][0] << " " << A[i][1];
			solutiond(A, i);
		}
	}
	return 1;
};

bool cmp(const vector<int> &p1, const vector<int> &p2){
    return p1[0] < p2[0];
};

int solution(vector<int> &A, vector<int> &B) {
	
	vector<vector<int> > arr(10);

	for (ll i = 0 ; A.size() ; ++i) {
		vector<int> aaa(2);
		aaa.push_back(A[i]);
		aaa.push_back(B[i]);

		arr.push_back(aaa);
			
	}
	sort(arr.begin(), arr.end(), cmp);

	solutiond(arr, 0);
	return 1;
};

int main() {
#ifdef YH
#endif
	vector<int>  arr(10);
	arr.push_back(1);
	arr.push_back(3);
	arr.push_back(7);
	arr.push_back(9);
	arr.push_back(9);

	vector<int>  arr2(10);
	arr.push_back(5);
	arr.push_back(6);
	arr.push_back(8);
	arr.push_back(9);
	arr.push_back(10);	
	
	solution(arr, arr2);
	return 0;
}

