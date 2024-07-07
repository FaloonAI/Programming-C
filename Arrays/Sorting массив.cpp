#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main() {
	setlocale(LC_ALL, "RU");

	int a[100], i, j;
	srand((unsigned)time(NULL));

	for (i = 0; i < 100; i++) {
		a[i] = 1 + rand() % 1000;
		printf("%d", a[i]);
	}

	for (i = 0; i < 99; i++) {
		for (j = i + 1; j < 100; j++) {
			if (a[i] < a[j]) {
				a[i] = a[i] + a[j];
				a[j] = a[i] - a[j];
				a[i] = a[i] - a[j];
			}
		}
	}

	printf("\n Отсортировочный массив\n");

	for (i = 0; i < 100; i++) {
		printf("%8d", a[i]);
	}

	return 0;
}