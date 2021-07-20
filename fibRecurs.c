#include <stdio.h>

fibRecurs(int n) {
	if (n <= 1) return n;
	else return fibRecurs(n - 2) + fibRecurs(n - 1);
}

int main(void) {
	int input, result = 0;
	printf("%s", "피보나치 번호:");
	scanf_s("%d", &input);
	result = fibRecurs(input);
	printf("%d", result);
}