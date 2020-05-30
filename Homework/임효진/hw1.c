#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[1000000];
	scanf("%[^\n]s", &s1);

	char* ptr = strtok(s1, " ");

	int i = 0;

	while (ptr != NULL)
	{
		i++;
		ptr = strtok(NULL, " ");
	}

	printf("%d\n", i);
	return 0;
}
