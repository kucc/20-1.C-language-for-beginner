#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num1, num2, num_s;
	printf("����1�� �Է��ϼ���"); scanf("%d", &num1);
	printf("����2�� �Է��ϼ���"); scanf("%d", &num2);
	if (num1 <= num2) {
		num_s = num1;
	}
	else {
		num_s = num2;
	}
	int GCD = 0;
	for (int i = 1; i < num_s +1; i++) {
			if (num1 % i == 0 && num2 % i == 0) {
			GCD = i;
		}
		else {
		continue;
		}
	}
	printf("%d", GCD);
}