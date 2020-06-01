#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", n, i, n * i);
	}
	return 0;
}