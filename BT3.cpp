#include <stdio.h>

void total(int a, int b, int *sum);

int main() {
	int a = 10, b = 15, sum = 0;
	total(a, b, &sum);
	printf("Tong %d va %d la: %d", a, b, sum);
	
	return 0;
}

void total(int a, int b, int *sum) {
	*sum = a + b;
}
