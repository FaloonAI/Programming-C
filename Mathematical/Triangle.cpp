#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "RU");
	int a, b, c;
	printf("Стороны: ");

	printf("a = ");
	scanf_s("%d", &a);

	printf("b = ");
	scanf_s("%d", &b);

	printf("c = ");
	scanf_s("%d", &c);

	if (a + b >= c && a + c >= b && b + c >= a) {
		printf("Существует");
	}

	else {
		printf("Не существует");
	}

	return 0;
}