#include <stdio.h>

int palindroom(char*);

int main() {
	char s1[] = "meetsysteem";
	printf("Palindroom true/false? S1: %d", palindroom(&s1));
	return 0;
}

int palindroom(char* s1) {
	int i, length;
	length = strlen(s1);
	for (i = 0; i < length; i++) {
		if (*(s1 + i) != *(s1+(length - i - 1)))
			return 0;
	}
	return 1;
}