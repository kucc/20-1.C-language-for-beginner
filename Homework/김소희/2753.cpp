#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int n;
	printf("������ �Է����ּ���:");
	scanf_s("%d", &n);
	
	if (n % 4 == 0 && n % 100 != 0) {
		printf("1");
	}
	else if(n % 400 == 0) {
		printf("1");
	}
	else {
		printf("0");
	}
}