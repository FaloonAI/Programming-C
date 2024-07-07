#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "RU");
	int n;
	printf("Введите значение n: ");
	scanf_s("%d", &n);

	int a = 0;
	int b = 0;

	for (int i = 1; a < n; ++i) {
		a += i;
		++b;
	}
	printf("Нужно взять %d элементов для суммы: %d", b, n);
	return 0;
}