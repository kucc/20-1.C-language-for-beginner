#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num = 0; //�Է� �޴� ����
	int hour, min, sec; //�ð�, ��, ��

	printf("�Է�: "); //���� �Է� 
	scanf("%d", &num);

	sec = num % 60;
	num /= 60;
	min = num % 60;
	num /= 60;
	hour = num % 60;

	printf("%d�ð� %d�� %d��\n", hour, min, sec);

	return 0;
}