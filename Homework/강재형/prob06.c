#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num1, num2;
	printf("�ڿ���1�� �Է��ϼ���>");
	scanf("%d", &num1);
	printf("�ڿ���2�� �Է��ϼ���>");
	scanf("%d", &num2);
	int num_s, num_b;
	if (num1 <= num2) {
		num_s = num1;
		num_b = num2;
	}
	else {
		num_s = num2;
		num_b = num1;
	}
	int count = 0, sum3m = 0;
	for (int i = num_s; i < num_b + 1; i++) {
		if (i % 3 == 0) {
			count = count +1;
			sum3m = sum3m + i;
		}
	}
	printf("3�� ����� ���� : %d��\n", count);
	printf("3�� ����� ���� : %d", sum3m);
}