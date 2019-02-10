#include <iostream>


using namespace std;

int main() {
	unsigned long long int inBox; // 1~
	unsigned long long int group; // 0~10 12
	unsigned long long int maQ; // 1~
	unsigned long long int reQ; //  ~100

	cin >> inBox >> group >> maQ >> reQ;

	if (group == 0) { // 안오면 없에기만 하면되고
		cout << inBox * reQ;
		//cout << 0;
		return 0;
	}
	if (group == 1) { // 하나면 비용이 없고
		cout << 0;
		return 0;
	}

	if (group == inBox) { // .같다면 비용이 없고
		cout << 0;
		return 0;
	}

	if (reQ == 0) { // 지우는것이 비용이 없다면 다지우면 되고
		cout << 0;
		return 0;
	}

	

	unsigned long long int removeBox = (inBox % group); // 지울것
	unsigned long long int makeBox = group - removeBox; // 만들것
	
	/*if (inBox / group > group) { 
		cout << reQ * (inBox - group * group);
		return 0;
	}*/

	if (removeBox * reQ > makeBox * maQ) { // 만드는게 비용이 작음
		cout << makeBox * maQ;
	}
	else {
		cout << removeBox * reQ;           // 지우는게 비용이 작음
	}

	return 0;
}