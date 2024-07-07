#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int i, j, k, l, n = 2;
	scanf("%d, %d", &i, &j);
	scanf("%d, %d", &k, &l);
	if (l == k) {
		n--;
	}
	if (i == l) {
		n--;
	}
	printf("%d Ходов.", n);
	return 0;
}