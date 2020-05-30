#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int p = 1;
	scanf("%d", &n);

	for (int i = 1; i < n + 1; i++)
	{

		p *= i;
	}

	printf("%d", p);

	return 0;

}
