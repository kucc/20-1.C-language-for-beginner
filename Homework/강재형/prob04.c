#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	printf("���ڸ� �Է��ϼ���>");
	int num1, added;
	added = 0;
	scanf("%d", &num1);
	while (1) {
		added += num1 % 10;
		num1 = num1 / 10;
		if (num1 == 0) {
			break;
		}
	}
	printf("%d",added);
}