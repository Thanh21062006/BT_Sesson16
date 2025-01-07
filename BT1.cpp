#include <stdio.h>

int main() {
	int x = 10;
	int *xprt = &x;
	
	//Cach 1:
	printf("Gia tri x la: %d\n", x);
	//Cach 2:
	printf("Gia tri x la: %d\n", *xprt);
	
	return 0; 
}
