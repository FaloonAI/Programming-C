#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "RU");
	int a[28], i;

	for (i = 0; i < 28; i++) {
		a[i] = 0;
	}

	for (int k = 0; k < 10; k++) {
		for (int l = 0; l < 10; l++) {
			for (int m = 0; m < 10; m++) {
				a[k + l + m] ++;
			}
		}
	}
	int s = 0;

	for (i = 0; i < 28; i++) {
		s += a[i] * a[i];
	}

	printf("%d Lucky Tickets", s);

	return 0;
}