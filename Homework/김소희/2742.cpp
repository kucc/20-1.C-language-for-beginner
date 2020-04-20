#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int n;
	int i;
	scanf_s("%d", &n);

	for (i = n; i > 0; --i) {
		printf("%d\n", i);
	}

	return 0;
}