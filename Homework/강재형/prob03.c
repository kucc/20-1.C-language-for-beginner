#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int sec, s, h, m;
	printf("초를 입력하세요>");
	scanf("%d", &sec);
	h = sec / 3600;
	m = (sec - (3600 * h)) / 60;
	s = (sec - 3600 * h - 60 * m);
	printf("%d시간 %d분 %d초", h, m, s);
	return 0;
}