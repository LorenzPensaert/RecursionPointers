#include <stdio.h>

int Acker(int, int);
int counter;

int main() {
	counter = 0;
	printf("Uitkomst Acker(1,2): %d\n", Acker(1, 2));
	printf("Recursies aantal Acker(1,2): %d\n", counter);

	counter = 0;
	printf("Uitkomst Acker(3,2): %d\n", Acker(3, 2));
	printf("Recursies aantal Acker(3,2): %d\n", counter);

	counter = 0;
	printf("Uitkomst Acker(3,5): %d\n", Acker(3, 5));
	printf("Recursies aantal Acker(3,5): %d\n", counter);

	return 0;
}

int Acker(int m, int n) {
	counter++;
	if (m == 0) return n + 1;
	if (n == 0) return Acker((m - 1), 1);
	return Acker((m - 1), Acker(m, (n - 1)));
}