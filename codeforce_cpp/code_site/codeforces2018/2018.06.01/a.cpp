#include <iostream>

using namespace std;

// �� ���� ����
// ���� Ű���Ǵ� �л� ������� ���

int main() {
	int manCount, teamCount;
	int **teamMem;
	int fullCont =0;
	int curruntMan;
	cin >> manCount >> teamCount;
	int teamtotal = (int)(manCount / teamCount) + 1;

	int unique[100][2] = { 0, };
	int uniqueCount = 0;

	teamMem = new int*[teamCount];

	for (int i = 0; i < manCount; ++i) {
		*(teamMem + i) = new int[teamtotal];
		for (int j = 0; j < teamtotal; ++j) {
			teamMem[i][j] = 0;
		}
		
		
		cin >> curruntMan;

		for (int j = 0; j < teamCount; ++j) {
			if (unique[j][0] == curruntMan) // ������ �ִٸ�
				break;
			if (unique[j][0] == 0) { // ����ٸ� �ִٸ�
				unique[j][0] = curruntMan;
				unique[j][1] = i + 1;
				uniqueCount++;
				break;
			}
		}

		if (fullCont != teamCount - 1) {
			teamMem[fullCont][0] = curruntMan;
			fullCont++;
		}
		else { // ��ĭ�� ��ä������
			int su = 0;
			for (int k = 0; k < teamtotal; ++k) {
				if (teamMem[i][k] == curruntMan) // �������� ���� �̹� ������� ��������
					break;
				if (teamMem[i][k] == 0) { // ������
					teamMem[i][k] = curruntMan;
					su = 1;
					break;
				}
			}

			if (su == 0) {
				// ����
				cout << "NO";
				return 0;
			}
		}
	}
	if (uniqueCount < teamCount) {
		cout << "NO";
		return 0;
	}
	else {
		cout << "YES" << endl;
		cout << unique[0][1];
		for (int i = 1; i < teamCount; ++i) {
			cout <<" "<< unique[i][1];
		}
	}
	    
	return 0;
}