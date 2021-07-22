#include <stdio.h>

int LCM_usingGCD(int a, int b) {
	int r;
	if (b == 0) return a;
	r = a % b;
	a = b;
	b = r;
	return LCM_usingGCD(a, b);
}

int main(void) {
	long long int a, b, result;
	scanf("%lld %lld", &a, &b);
	result = a*b / LCM_usingGCD(a, b);  //이 줄이 핵심
	printf("%lld", result);
}
//GCD를 구하는 recursive함수는 그대로다.
//main함수에서 LCM을 구하는 공식인 LCM = ab/GCD를 적용.
//recursive 내에서는 a, b가 계속 변하기 때문에 ab를 구할 수 없어서.
//또한 lcm(714552, 376486) 등 큰 숫자에 대해서 lcm의 결과는 상당히 큰 메모리를 필요로 함.
//그래서 long long int자료형을 활용. 그에 상응하여 scanf와 printf에 %lld를 쓰는 건 필수