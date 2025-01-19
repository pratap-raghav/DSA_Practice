#include <stdio.h>

int main() {
	int x = 0;
	
	printf("%d", x);
	x = 1 % x;
	printf("%d", x);
	x = 1 % x;
	printf("%d", x);
	return 0;
}
