#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int factorial(int n) {
	if (n > 1) {
		return n * factorial(n - 1);
	}
	else
		return 1;
}

int main() {
	int num;
	scanf("%d", &num);
	printf("%d", factorial(num));
}