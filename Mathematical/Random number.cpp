#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	srand((unsigned)time(NULL));
	int a;
	for (int i = 1; i <= 5; i++) {
		a = 1 + rand() % 36;
		printf("%d", &a);
	}
	return 0;
}