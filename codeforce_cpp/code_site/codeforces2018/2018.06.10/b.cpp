#include <iostream>

using namespace std;
void quickSort(int arr[], int size) { int pivot = arr[0]; int cursor = 0; for (int i = 1; i < size; i++) { if (pivot > arr[i]) { cursor++; swap(arr[cursor], arr[i]); } } swap(arr[0], arr[cursor]); if (cursor > 0) { quickSort(arr, cursor); } if (cursor + 1 < size - 1) { quickSort(arr + cursor + 1, size - cursor - 1); } }

int main() {
	int c;
	int un;

	cin >> c >> un;

	int *bi = new int[c];
	int *bir = new int[c];


	for (int i = 0; i < c; ++i) {
		cin >> bi[i];
		bir[i] = 0;
	}

	quickSort(bi, c);
	
	int fi = 1;

	for (int i = c; i < c; ++i) {
		for (int j = fi; j < c; ++j) {
			if (i == j || bir[j] == 1)
				continue;

			if (bi[i] > bi[j] && bi[i] <= bi[j] + un) {
				bir[j] = 1;
			}
			fi = j;
			if (bi[i] > bi[j] + un) {
				break;
			}
		}
	}

	int total = 0;
	for (int i = 0; i < c; ++i) {
		if (bir[i] == 0)
			total++;
	}

	cout << total;

	return 0;
}