#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int a;
	int b;

	printf("���ϰ� ���� �� ������ �Է��Ͻÿ�(��, �� ���� ���̿� �� ĭ ����)\n");

	while (scanf_s("%d %d", &a, &b)!= EOF) {
		printf("%d\n", a + b);
	}
	return 0;
}