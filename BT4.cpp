#include <stdio.h>

void showArray(int *arr, int size);

int main() {
	int array[] = {2, 1, 0, 6, 2, 0, 0, 6};
	int size = sizeof(array)/sizeof(int);
	
	showArray(array, size);
	
	return 0;
}

void showArray(int *arr, int size) {
	printf("array[%d] = ", size);
	for(int i = 0; i < size; i++){
		printf("%d ", *(arr + i));
	}
	return;
}
