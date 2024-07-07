#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "RU");
	srand((unsigned)time(NULL));
	int a[100], i;
	printf("Наш массив\n");
	for (i = 0; i < 100; i++) {
		a[i] = 1 + rand() % 100;
		printf("%8d", a[i]);
	}

	printf("\nТакие элементы - ");
	int k = 0;

	for (i = 0; i < 100; i++) {
		if (a[i] == i + 1) {
			printf("\n%8d", i + 1);
			k++;
		}
	}
	if (k == 0) {
		printf("Нет элементов");
	}
	return 0;
}