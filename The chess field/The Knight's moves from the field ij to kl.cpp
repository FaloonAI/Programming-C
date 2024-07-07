#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "RU");
	srand((unsigned)time(NULL));

	int i, j, k, l;

	scanf("%d, %d\n", &i, &j);
	scanf("%d, %d\n", &k, &l);

	int n = (i - k) * (i - k) + (j - l) * (j - l);

	if (n == 5) {
		printf("Возможно");
	}
	else {
		printf("Невозможно");
	}
	return 0;
}