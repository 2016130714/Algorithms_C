#include <stdio.h>

FibList(int n) {
	int a = 0;
	int b = 1;
	int c = 0;
	for (int i = 2; i <= n; i++) {
		c = a + b;
		a = b;
		b = c;
	};
	return c;
}

int main(void) {
	int input, result;
	printf("%s", "Fibonacci number:");
	scanf_s("%d", &input);
	result = FibList(input);
	printf("%d", result);
}