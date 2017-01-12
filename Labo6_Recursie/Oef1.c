#include <stdio.h>

long reverseGetal(long);

int main() {
	long n, r;

	printf("Getal: ");
	scanf_s("%ld", &n);
	r = reverseGetal(n);
	printf("Reverse getal: %ld\n", r);

	return 0;
}

long reverseGetal(long n) {
	static long r = 0;

	if (n == 0)
		return 0;

	r = r * 10;
	r = r + n % 10;
	reverseGetal(n / 10);
	return r;
}