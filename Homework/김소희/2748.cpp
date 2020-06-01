#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

long long int fibo(int num) {
	long long a[91];
	int i;
	a[0] = 0;
	a[1] = 1;
	for (i = 2; i <= num; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}
	return a[num];
}


int main() {
	int n;
	scanf_s("%d", &n);
	printf("%lld", fibo(n));
}