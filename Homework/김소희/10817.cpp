#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int num1, num2, num3;
	int tmp;
	scanf("%d %d %d", &num1, &num2, &num3);

	if (num1 < num2) {
		tmp = num1;
		num1 = num2;
		num2 = tmp;
	}

	if (num2 < num3) {
		tmp = num2;
		num2 = num3;
		num3 = tmp;
	}

	if (num1 < num2) {
		tmp = num1;
		num1 = num2;
		num2 = tmp;
	}

	printf("%d", &num2);
}
