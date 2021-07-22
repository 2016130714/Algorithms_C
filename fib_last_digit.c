#include <stdio.h>

int fib_last_digit(int n) {
	int a = 0;
	int b = 1;
	int c = 0;
	if (n < 2) return n;
	for (int i = 2; i <= n; i++) {
		c = (a + b)%10;    //여기 한 줄을 떠올리는데 2시간 걸림.
		a = b;
		b = c;
	}
	return c;
}

int main(void) {
	int input = 0;
	int result;
	scanf("%d", &input);
	result = fib_last_digit(input);
	printf("%d", result);
}

//애초에 목표가 "일의 자리"라면, 나머지 자리를 저장할 필요가 없다.
//즉, 피보나치를 구해서 마지막에 return c%10을 할 필요 없이,
// for loop 안에서 c = (a+b) % 10으로 처리하면 훨씬 효율적이다.
// 또한 자릿수를 구할 때 %10, /10 등을 적극 활용하자!!