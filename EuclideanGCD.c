#include <stdio.h>

//key lemma: gcd(a, b) = gcd(b, a mod b)
//�� �˰��򿡼� a % b�� �ݺ��ϱ� ������ �� lg(ab)�� complexity�� ����.
//compute gcd(3918848, 1653264)  -> 6���� step�̸� �ȴ�.
int EuclideanGCD(int a, int b) {
	int r;
	if (b == 0) return a;
	r = a % b;
	a = b;
	b = r;
	return EuclideanGCD(a, b);
}

int main(void) {
	int a, b, result;
	printf("%s", "digits for GCD:");
	scanf_s("%d %d", &a, &b);
	result = EuclideanGCD(a, b);
	printf("%d", result);
}