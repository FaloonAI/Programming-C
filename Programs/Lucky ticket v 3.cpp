#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "RU");
	int a[55], i;

	for (i = 0; i < 55; i++) {
		a[i] = 0;
	}

	for (int k = 0; k < 10; k++) {
		for (int l = 0; l < 10; l++) {
			for (int m = 0; m < 10; m++) {
				for (int n = 0; n < 10; n++) {
					for (int b = 0; b < 10; b++) {
						for (int v = 0; v < 10; v++) {
							a[k + l + m + n + b + v]++;
						}
					}
				}
			}
		}
	}

	int s = 0;

	for (i = 0; i < 55; i++) {
		s += a[i] * a[i];
	}

	printf("%d Lucky Tickets", s);

	return 0;
}