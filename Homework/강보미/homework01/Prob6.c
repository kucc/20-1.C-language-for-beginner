#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n1, n2; //입력 받을 두 자연수
	int big, small; //두 자연수 중 큰 것, 작은 것 
	int sum = 0; //3의 배수의 합 
	int count = 0; //3의 배수의 개수 

	printf("두 자연수 입력:");
	scanf("%d %d", &n1, &n2);

	if (n1 >= n2) {
		big = n1;
		small = n2;
	}
	else {
		big = n2;
		small = n1;
	}

	for (int i = small; i <= big; i++) {
		if (i % 3 == 0) {
			sum += i;
			count++;
		}
	}
	printf("3의 배수의 합: %d\n", sum);
	printf("3의 배수 개수: %d\n", count);

	return 0;
}