#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num[9];
	scanf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d", &num[0], &num[1], &num[2],
		&num[3], &num[4], &num[5], &num[6], &num[7], &num[8]);

	int big = 0;
	int i;
	for (i = 0; i < 9; i++)
	{
		if (big < num[i])
			big = num[i];
		else
			big = big;
	}
	int j;
	for (j = 0; j < 9; j++)
	{
		if (big == num[j])
			break;
	}

	printf("%d\n%d", big, j + 1);
	return 0;

}
