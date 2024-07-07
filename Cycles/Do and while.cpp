#include <stdio.h>
int main() {
	int s = 0, i = 1;
	do
	{
		s += i;
		i++;
	} while (i <= 1000);
	printf("S = %d", s);
	return 0;
}