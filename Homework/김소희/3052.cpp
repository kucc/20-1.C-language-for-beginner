#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int remainder[42] = { 0, };
	int num;
	int i;
	int count = 0;

	printf("숫자를 10개 입력하시오.\n");
	for (i = 0; i < 10; i++) {
		scanf_s("%d\n", &num);
		remainder[num%42]++;
	}
	for (i = 0; i < 42; i++) {
		if (remainder[i] != 0) {
			count++;
		}
	}
	printf("서로 다른 나머지 수: %d", count);

	return 0;

}