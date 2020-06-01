#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int fact(int num) {
	if (num > 1) {
		return num * fact(num - 1);
	}
	else
		return 1;
}

int main() {
	int N;

	scanf_s("%d", &N);
	printf("%d\n", fact(N));
	return 0;
}