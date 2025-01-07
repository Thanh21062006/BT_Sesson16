#include <stdio.h>

int index(int *arr,int value);

int main() {
	int array[10] = {1, 4, 6, 2, 7, 9, 11, 0, 3, 8};
	int value, temp;
	printf("Moi ban nhap vao gia tri can tim: ");
	scanf("%d", &value);
	
	temp = index(array, value);
	if(temp == -1){
		printf("Vi tri khong ton tai trong mang!");
	}else{
		printf("Gia tri %d tai vi tri %d", value, temp);
	}
	
	return 0;
}

int index(int *arr,int value){
	for(int i = 0; i < 10; i++){
		if(*(arr + i) == value){
			return i;
		}
	}
	return -1;
};
