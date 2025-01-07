#include <stdio.h>

int main() {
	int x = 10;
	int *xprt = &x;
	
	//Cach 1:
	printf("Gia tri x la: %d\n", x);
	printf("Dia chi x la: %lu\n", &x);
	//Cach 2:
	printf("Gia tri x la: %d\n", *xprt);
	printf("Dia chi xprt la: %lu\n", xprt);
	
	return 0; 
}
