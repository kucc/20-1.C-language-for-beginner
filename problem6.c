#include <stdio.h>

int main()
{
	int m, n;
	int sum = 0;

	printf("�� ���� �Է��ϼ���: \n");
	scanf_s("%d %d", &m, &n);

	if (m % 3 == 0 && n % 3 != 0)
		printf("1��, %d", m);
	else if (n % 3 == 0 && m % 3 != 0)
		printf("1��, %d", 1, n);
	else if (m % 3 == 0 && n % 3 == 0)
		printf("2��, %d", sum = m + n);
	else
		printf("0��\n");

}
