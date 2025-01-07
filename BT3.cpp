#include <stdio.h>

int total(int *a, int *b);

int main() {
	int a = 10, b = 15, sum;
	sum = total(&a, &b);
	printf("Tong %d va %d la: %d", a, b, sum);
	
	return 0;
}

int total(int *a, int *b){
	int total = *a+*b;
	
	return total;
};
