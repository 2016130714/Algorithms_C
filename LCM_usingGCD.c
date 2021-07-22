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
	result = a*b / LCM_usingGCD(a, b);  //�� ���� �ٽ�
	printf("%lld", result);
}
//GCD�� ���ϴ� recursive�Լ��� �״�δ�.
//main�Լ����� LCM�� ���ϴ� ������ LCM = ab/GCD�� ����.
//recursive �������� a, b�� ��� ���ϱ� ������ ab�� ���� �� ���.
//���� lcm(714552, 376486) �� ū ���ڿ� ���ؼ� lcm�� ����� ����� ū �޸𸮸� �ʿ�� ��.
//�׷��� long long int�ڷ����� Ȱ��. �׿� �����Ͽ� scanf�� printf�� %lld�� ���� �� �ʼ�