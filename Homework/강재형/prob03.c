#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int sec, s, h, m;
	printf("�ʸ� �Է��ϼ���>");
	scanf("%d", &sec);
	h = sec / 3600;
	m = (sec - (3600 * h)) / 60;
	s = (sec - 3600 * h - 60 * m);
	printf("%d�ð� %d�� %d��", h, m, s);
	return 0;
}