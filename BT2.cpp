#include <stdio.h>
void swap(int *numb1, int *numb2);

int main() {
	int x = 10, x1 = 15;
	
	printf("Gia tri x truoc: %d\n", x);
	printf("Gia tri x1 truoc: %d\n\n", x1);
	swap(&x, &x1);
	printf("Gia tri x sau: %d\n", x);
	printf("Gia tri x1 sau: %d\n", x1);
	
	return 0;
}

void swap(int *numb1, int *numb2) {
	int temp = *numb1;
	*numb1 = *numb2;
	*numb2 = temp;
	
	return;
};
