#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "RU");
	int a[100], i, j;
	printf("Первый массив \n");
	srand((unsigned)time(NULL));
	for (i = 0; i < 100; i++) {
		a[i] = i+1;
		printf("%8d", a[i]);
	}
	for (i = 0; i < 100; i++) {
		j = rand() % 100;
		if (i != j) {
			a[i] = a[i] + a[j];
			a[j] = a[i] - a[j];
			a[i] = a[i] - a[j];
		}
	}
	printf("\nПеремешанный массив\n");
	for (i = 0; i < 100; i++) {
		printf("%8d", a[i]);
	}
	return 0;
}