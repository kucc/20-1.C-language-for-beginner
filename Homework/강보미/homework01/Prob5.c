#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int n1, n2; //�Է¹��� �� ����
	int big, small; //n1, n2�߿� ū ��, ���� ��
	int cm = 0; //�����

	printf("���� �� �� �Է�: ");
	scanf("%d %d", &n1, &n2);

	if (n1 >= n2) {
		big = n1;
		small = n2;
	}
	else {
		big = n2;
		small = n1;
	}

	for (int i = 1; i <= small; i++) {
		if (big % small == 0) {
			cm = small;
			break;
		}

		if (small % i == 0 && big % i == 0) {
			cm = i;
		}
	}

	printf("%d�� %d�� �ִ� �����: %d\n", n1, n2, cm);

	return 0;
}