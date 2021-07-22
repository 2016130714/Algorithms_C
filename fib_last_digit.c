#include <stdio.h>

int fib_last_digit(int n) {
	int a = 0;
	int b = 1;
	int c = 0;
	if (n < 2) return n;
	for (int i = 2; i <= n; i++) {
		c = (a + b)%10;    //���� �� ���� ���ø��µ� 2�ð� �ɸ�.
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

//���ʿ� ��ǥ�� "���� �ڸ�"���, ������ �ڸ��� ������ �ʿ䰡 ����.
//��, �Ǻ���ġ�� ���ؼ� �������� return c%10�� �� �ʿ� ����,
// for loop �ȿ��� c = (a+b) % 10���� ó���ϸ� �ξ� ȿ�����̴�.
// ���� �ڸ����� ���� �� %10, /10 ���� ���� Ȱ������!!