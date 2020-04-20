#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int a;
	int b;

	printf("합하고 싶은 두 정수를 입력하시오(단, 두 정수 사이에 한 칸 띄우기)\n");

	while (scanf_s("%d %d", &a, &b)!= EOF) {
		printf("%d\n", a + b);
	}
	return 0;
}