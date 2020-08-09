#ifdef WIN32 
#include "..\\..\\..\\stdc++.h"
#elif __APPLE__
#include "../../stdc++.h"
#else
#include <bits/stdc++.h>
#endif

typedef long long ll;
using namespace std;
int l[2] = {1,4};
int r[2] = {3,4};
string solution(vector<int> numbers, string hand);
string solution(vector<int> numbers, string hand) {
    string answer = "";
	for (int i = 0 ; i <numbers.size() ; ++i) {
        int m[2] = {numbers[i] % 3, numbers[i] / 3 + 1};
        if (numbers[i] == 0) {
            m[0] = 2;
            m[1] = 4;
        }
		
		if (m[0] == 0) {
			answer += "R";
            r[0] = m[0];
            r[1] = m[1];
		} else if (m[0] == 1) {
            answer += "L";
            l[0] = m[0];
            l[1] = m[1];
        } else {
            if (abs(m[0]-l[0]) + abs(m[1]-l[1]) > abs(m[0]-r[0]) + abs(m[1]-r[1])) {
                answer += "R";
                r[0] = m[0];
                r[1] = m[1];
            } else if (abs(m[0]-l[0]) + abs(m[1]-l[1]) < abs(m[0]-r[0]) + abs(m[1]-r[1])) {
                answer += "L";
                l[0] = m[0];
                l[1] = m[1];
            } else {
                if (hand == "left") {
                    answer += "L";
                    l[0] = m[0];
                    l[1] = m[1];
                } else {
                    answer += "R";
                    r[0] = m[0];
                    r[1] = m[1];
                }
            }
        }
	}
    return answer;
}


int main() {
	static const int arr[] = {1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5};
	vector<int> numbers (arr, arr + sizeof(arr) / sizeof(arr[0]) );
	string hand = "right";
	solution(numbers, hand);
	return 0;
}
