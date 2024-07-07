#define _CRT_SECURE_NO_WARNINGS
#define N 36
#define K 5

#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "RU");
	int a[N], i, j;
	printf("Первый массив \n");
	srand((unsigned)time(NULL));
	for (i = 0; i < N; i++) {
		a[i] = i+1;
		printf("%8d", a[i]);
	}
	for (i = 0; i < N; i++) {
		j = rand() % N;
		if (i != j) {
			a[i] = a[i] + a[j];
			a[j] = a[i] - a[j];
			a[i] = a[i] - a[j];
		}
	}
	printf("\nСчастливое число\n");
	for (i = 0; i < K; i++) {
		printf("%8d", a[i]);
	}
	return 0;
}