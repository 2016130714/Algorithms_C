#include<stdio.h>

int main(void) {
	int length;
	int data[5] = { 1, 2, 3, 4, 5};
	length = sizeof(data) / sizeof(int);
	printf("%d", length);
	return 0;
}