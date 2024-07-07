#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "RU");
	int a[100], i, j, k;
	srand((unsigned)time(NULL));
	for (i = 0; i < 100; i++) {
		a[i] = 1 + rand() % 100;
		printf("%8d", a[i]);
	}
	printf("\n Отсутствующие элементы\n");
	for (j = 1; j < 100; j++) {
		k = 0;
		for (i = 0; i < 100; i++) {
			if (a[i] == j) {
				k++;
			}
		}
		if (k == 0) {
			printf("%8d", j);
		}
	}
	return 0;
}