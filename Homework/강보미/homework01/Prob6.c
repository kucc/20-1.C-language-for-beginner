#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n1, n2; //�Է� ���� �� �ڿ���
	int big, small; //�� �ڿ��� �� ū ��, ���� �� 
	int sum = 0; //3�� ����� �� 
	int count = 0; //3�� ����� ���� 

	printf("�� �ڿ��� �Է�:");
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
	printf("3�� ����� ��: %d\n", sum);
	printf("3�� ��� ����: %d\n", count);

	return 0;
}