#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main() {
	setlocale(LC_ALL, "RU");

	int a[1000], i, j;
	srand((unsigned)time(NULL));

	for (i = 0; i < 1000; i++) {
		a[i] = 1 + rand() % 100;
		printf("%8d", a[i]);
	}

	int b[100];

	for (i = 0; i < 100; i++) {
		b[i] = 0;
	}
	for (i = 0; i < 1000; i++) {
		b[a[i]-1]++;
	}
	int c[100];

	for (i = 0; i < 100; i++) {
		c[i] = b[i];
	}

	for (i = 0; i < 99; i++) {
		for (j = i + 1; j < 100; j++) {
			if (c[i] < c[j]) {
				c[i] = c[i] + c[j];
				c[j] = c[i] - c[j];
				c[i] = c[i] - c[j];
			}
		}
	}

	int k;
	printf("\nВведите значение k: ");

	scanf("%d", &k);
	j = c[k - 1];
	i = 0;
	while (b[i] == j) {
		i++;
	}

	printf("%d", i + 1);

	return 0;
}