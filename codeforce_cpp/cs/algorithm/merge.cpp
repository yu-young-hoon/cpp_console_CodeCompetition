#include <stdio.h>
#include <memory.h>
void branchArray(int length, char *inputArray);
void insertSort(int length, char *inputArray);
int mainm(){
	char inputArray[1000] = { 0, };
	int p = 0, i;
	while (1){
		scanf("%d", inputArray + p);
		if (inputArray[p] == 111)
			break;
		p++;
	}
	for (i = 0; i < p; ++i)
		printf("%d ", inputArray[i]);
	printf("\n");
	branchArray(p,inputArray);

	for (i = 0; i < p ; ++i)
		printf("%d ", inputArray[i]);
	scanf("%d", &p);
	return 0;
}

void branchArray(int length, char *inputArray){
	printf("length %d\n", length);
	if (length < 5)
		insertSort(length, inputArray);
	else{
		
	}
}

void mergeSort(){

}

void insertSort(int length, char *inputArray){
	int i, j, temp;
	for (i = 0 ; i < length; ++i){
		for (j = 0; j < length; ++j){
			if (inputArray[i] < inputArray[j]){
				if (i + 1 == j)
					break;
				temp = inputArray[i];
				if (i > j)//삽입되는 방향이 뒤에서 앞으로
					memcpy((void*)&inputArray[j + 1], (void*)&inputArray[j], sizeof(char(i - j)));
				else//삽입되는 방향이 앞에서 뒤로
					memcpy((void*)&inputArray[i + 1], (void*)&inputArray[i], sizeof(char(j - i)));
				
				inputArray[j] = temp;
				break;
			}
		}
	}
}