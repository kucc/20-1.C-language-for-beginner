#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int N, X, input;

	scanf("%d %d", &N, &X);

	for (int i = 0; i < N; i++) {
		scanf("%d", &input);

		if (X > input) {
			printf("%d ", input);
		}
	}
}