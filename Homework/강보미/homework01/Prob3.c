#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num = 0; //입력 받는 정수
	int hour, min, sec; //시간, 분, 초

	printf("입력: "); //정수 입력 
	scanf("%d", &num);

	sec = num % 60;
	num /= 60;
	min = num % 60;
	num /= 60;
	hour = num % 60;

	printf("%d시간 %d분 %d초\n", hour, min, sec);

	return 0;
}