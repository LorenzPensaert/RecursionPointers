#include <stdio.h>

void rotate(int*, int*, int*);

int main() {
	int a = 1, b = 2, c = 3;	
	printf("Oorspronkelijke volgorde A=%d, B=%d, C=%d: \n", a, b, c);
	rotate(&a, &b, &c);
	printf("Uiteindelijke volgorde A=%d, B=%d, C=%d: \n", a, b, c);
	return 0;
}

void rotate(int* a, int* b, int* c) {
	int temp = *b;
	*b = *a;
	*a = *c;
	*c = temp;
	
}