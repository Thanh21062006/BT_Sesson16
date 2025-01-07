#include <stdio.h>

void adddArrray(int *arr, int value, int pos);

int main() {
	int array[5] = {2, 4, 6, 8, 10};
	int value, pos;
	printf("Gia tri moi la: ");
	scanf("%d", &value);
	printf("Vi tri can cap nhat: ");
	scanf("%d", &pos);
	
	if(pos >= 0 && pos < 5){
		adddArrray(array, value, pos);
	}else{
		printf("Vi tri khong hop le!");
	}
	
	return 0;
}

void adddArrray(int *arr, int value, int pos) {
	*(arr + pos) = value;
	for(int i = 0; i < 5; i++){
		printf("%d ", *(arr + i));
	}
	return;
};
