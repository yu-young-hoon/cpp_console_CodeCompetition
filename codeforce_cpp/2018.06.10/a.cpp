#include <iostream>


using namespace std;

int main() {
	unsigned long long int inBox; // 1~
	unsigned long long int group; // 0~10 12
	unsigned long long int maQ; // 1~
	unsigned long long int reQ; //  ~100

	cin >> inBox >> group >> maQ >> reQ;

	if (group == 0) { // �ȿ��� �����⸸ �ϸ�ǰ�
		cout << inBox * reQ;
		//cout << 0;
		return 0;
	}
	if (group == 1) { // �ϳ��� ����� ����
		cout << 0;
		return 0;
	}

	if (group == inBox) { // .���ٸ� ����� ����
		cout << 0;
		return 0;
	}

	if (reQ == 0) { // ����°��� ����� ���ٸ� ������� �ǰ�
		cout << 0;
		return 0;
	}

	

	unsigned long long int removeBox = (inBox % group); // �����
	unsigned long long int makeBox = group - removeBox; // �����
	
	/*if (inBox / group > group) { 
		cout << reQ * (inBox - group * group);
		return 0;
	}*/

	if (removeBox * reQ > makeBox * maQ) { // ����°� ����� ����
		cout << makeBox * maQ;
	}
	else {
		cout << removeBox * reQ;           // ����°� ����� ����
	}

	return 0;
}