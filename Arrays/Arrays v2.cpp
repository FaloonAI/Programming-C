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
		a[i] = 1 + rand() % 10000;
		printf("%8d", a[i]);
	}

	int min = a[0], max = a[0], imin = 0, imax = 0;

	for ( i = 1; i < 100; i++) {
		if (a[i] > max) {
			max = a[i];
			imax = i;
		}
		if (a[i] < min) {
			min = a[i];
			imin = i;
		}
	}
	printf("\nМинимильный элемент: %d\nНаходится в %d ячейки.\n", min, imin + 1);
	printf("Максимальный элемент: %d\nНаходится в %d ячейки.", max, imax + 1);
	return 0;
}