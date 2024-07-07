#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <cmath>

int main() {
	setlocale(LC_ALL, "RU");
	float a, b, c;
	printf("Введите a,b,c: ");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	float d = b * b - 4 * a * c;
	if (d == 0) {
		printf("Корней нет!");
	}
	else
	{
		float x1 = (-b + sqrt(d)) / 2;
		float x2 = (-b - sqrt(d)) / 2 / a;
		printf("%f и &f", x1, x2);
	}
	return 0;
}
