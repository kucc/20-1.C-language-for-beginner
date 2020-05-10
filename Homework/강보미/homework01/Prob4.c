#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num; //입력받을 정수
	int sum = 0; //각 자리 수 합의 값 

	printf("정수 입력: ");
	scanf("%d", &num);

	while (1) {
		sum += num % 10;
		num /= 10;

		if (num == 0) {
			break;
		}
	}

	printf("자리 수 합: %d\n", sum);

	return 0;
}