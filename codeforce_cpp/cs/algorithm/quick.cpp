void swap(int* arr, int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int partition(int* arr, int left, int right)
{
	int mid = (left + right) / 2;
	swap(arr, left, mid);

	int pivot = arr[left];
	int i = left, j = right;
	while (i < j)
	{
		while (pivot < arr[j]) {
			j--;
		}
		while (i < j && pivot >= arr[i]) {
			i++;
		}
		swap(arr, i, j);
	}
	arr[left] = arr[i];
	arr[i] = pivot;
	return i;
}


void quicksort(int* arr, int left, int right)
{
	if (left >= right)
	{
		return;
	}
	int pi = partition(arr, left, right);
	quicksort(arr, left, pi - 1);
	quicksort(arr, pi + 1, right);
}

int main() {
	//int a = 1, b = 2, c = 3;
	//a = b = c;
	int arr[7] = { 30, 70,40,20,10,50,80 };

	quicksort(arr, 0, 6);
	return 0;
}

