#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "RU");
	srand((unsigned)time(NULL));

	int i, j, k, l, n = 2;

	scanf("%d, %d\n", &i, &j);
	scanf("%d, %d\n", &k, &l);

	if (i == k) {
		n++;
	}

	if (j == l) {
		n++;
	}
	
	if ((n != 0) && (abs(i - k)) == (abs(i - j))) {
		n--;
	}

	printf("%d Ходов", n);

	return 0;
}