#include <stdio.h>

void strcatArray(char[], char[]);
void strcatPointers(char* s1, char* s2);

int main() {
	char s1[] = "Hello", s2[] = "World";
	printf("Oorspronkelijk S1: %s, S2: %s\n", s1, s2);
	strcatArray(s1, s2);
	strcatPointers(&s1, &s2);
	return 0;
}

void strcatArray(char s1[], char s2[]) {
	char tmp[100] = "";
	int i = 0, j = 0;
	while (s1[i] != '\0') {
		tmp[i] = s1[i];
		i++;
	}
	
	while (s2[j] != '\0') {
		tmp[i] = s2[j];
		i++; j++;
	}
	printf("Arrays: S1: %s, S2: %s\n", tmp, s2);
}

void strcatPointers(char* s1, char* s2) {
	int i = strlen(s1), j = 0;

	while (j != strlen(s2)) {
		*(s1+i) = *(s2+j);
		i++; j++;
	}
	*(s1 + i) = '\0';
	printf("Pointers: S1: %s, S2: %s\n", s1, s2);

}