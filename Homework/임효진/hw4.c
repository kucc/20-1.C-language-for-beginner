#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int sum = 0;
	for (int i = 0; i < n + 1; i++)
	{
		sum += i;
	}
	printf("%d", sum);

	return 0;

}
