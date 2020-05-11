//학점계산기
#include<stdio.h>
int main() {
	int n_1, n_2, n_3, n_4, n_5, sum;
	sum = 0;
	char g_1, g_2, g_3, g_4, g_5;
	scanf("%d %c\n%d %c\n%d %c\n%d %c\n%d %c", &n_1, &g_1, &n_2, &g_2, &n_3, &g_3, &n_4, &g_4, &n_5, &g_5);
	int multi(int x, char a) {
		switch (a)
		{
		case 'A':
			x *= 4;
			break;
		case 'B':
			x *= 3;
			break;
		case 'C':
			x *= 2;
			break;
		case 'D':
			x *= 1;
			break;
		case 'F':
			x *= 0;
			break;
		}
		sum += x;
	}
	multi(n_1, g_1);
	multi(n_2, g_2);
	multi(n_3, g_3);
	multi(n_4, g_4);
	multi(n_5, g_5);
	int av = sum / 5;
	printf("%d", av);