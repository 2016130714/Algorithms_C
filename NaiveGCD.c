#include <stdio.h>
// Time Complexity = 2a + 2b 

int NaiveGCD(int a, int b) {
	int best = 0;
	for (int i = 1; i <= a + b; i++) {
		if (a / i & b / i) best = i;
	};
	return best;
}

int main(void) {
	int a, b, result;
	printf("%s", "two digits for GCD:");
	scanf_s("%d %d", &a, &b);
	result = NaiveGCD(a, b);
	printf("%d", result);
}