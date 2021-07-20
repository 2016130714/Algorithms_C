#include <stdio.h>

//key lemma: gcd(a, b) = gcd(b, a mod b)
//이 알고리즘에선 a % b를 반복하기 때문에 약 lg(ab)의 complexity를 가짐.
//compute gcd(3918848, 1653264)  -> 6번의 step이면 된다.
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