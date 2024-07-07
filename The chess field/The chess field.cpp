#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int i, j;
	scanf("%d, %d", &i, &j);
	if ((i % 2 == 1) && (j % 2 == 1) || (i % 2 == 0) && (j % 2 == 0)) {
		printf("Черное");
	}
	else {
		printf("Белое");
	}
	return 0;
}