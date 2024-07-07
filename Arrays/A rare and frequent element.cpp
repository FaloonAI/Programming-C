#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "RU");
	int a[1000], b[100], i;
	srand((unsigned)time(NULL));

	for (i = 0; i < 100; i++) {
		b[i] = 0;
	}

	for (i = 0; i < 1000; i++) {
		a[i] = 1 + rand() % 100;
		printf("%8d", a[i]);
		b[a[i] - 1]++;
	}
	int min = b[0], imin = 0;
	int max = b[0], imax = 0;

	for (i = 0; i < 100; i++) {
		if (b[i] > imax) {
			max = b[i];
			imax = i;
		}
		if (b[i] < min) {
			min = b[i];
			imin = i;
		}
	}
	printf("\nРедкий - %d, встретится %d раз(-a)", imin++, min);
	printf("\nЧастый - %d, встретится %d раз(-a)", imax++, max);

	return 0;
}