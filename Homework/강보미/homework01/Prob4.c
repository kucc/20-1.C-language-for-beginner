#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num; //�Է¹��� ����
	int sum = 0; //�� �ڸ� �� ���� �� 

	printf("���� �Է�: ");
	scanf("%d", &num);

	while (1) {
		sum += num % 10;
		num /= 10;

		if (num == 0) {
			break;
		}
	}

	printf("�ڸ� �� ��: %d\n", sum);

	return 0;
}