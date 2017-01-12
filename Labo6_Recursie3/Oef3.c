#include <stdio.h>

void Hanoi(int, char, char, char);
int counter = 0;

int main() {
	int m;

	printf("Hoeveel schijven zijn er? ");
	scanf_s("%d", &m);

	Hanoi(3, 'S', 'G', 'H');
	printf("\nConclusion: %d disks moved from S to G in %d steps", m, counter);
	
	return 0;
}

void Hanoi(int disk, char start, char finish, char spare) {
	if (disk > 0) {
		counter++;
		Hanoi(disk - 1, start, spare, finish);
		printf("\nMove disk %d from %c to %c", disk, start, finish);
		Hanoi(disk - 1, spare, finish, start);
	}

}