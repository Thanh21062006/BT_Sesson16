#include <stdio.h>

void sapXepArray(int *array);

int main() {
	int array[10] = {3, 6, 8, 4, 5, 9, 0, 1, 7, 2};
	
	printf("array[10] = ");
	sapXepArray(array);
	
	return 0;
}

void sapXepArray(int *array) {
	for(int i = 0;i < 10 - 1;i++){
		for(int j = 0;j < 10 - i - 1;j++){
			if(*(array + j) > *(array + j + 1)){
				int temp = *(array + j);
				*(array + j) = *(array + j + 1);
				*(array + j + 1) = temp;
			}
		}
	}
	
	for(int i = 0;i < 10;i++){
		printf("%d ", *(array + i));
	}
	return;
};
