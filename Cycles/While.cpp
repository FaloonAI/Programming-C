#include <stdio.h>
int main() {
	int s = 0, i = 1;
	while (i <= 1000) {
		s += i;
		i++;
	}
	printf("S = %d", s);
	return 0;
}