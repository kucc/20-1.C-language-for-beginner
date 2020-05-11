// 아예 for 문 안으로 안들어가고 바로 sum =0;이 나와요...
//어디에 문제가 있는 걸까요?

#include<stdio.h>
int main() {
	int n, sum;
	sum = 0;
	scanf("%d", &n);
	for (int i = 1; i > n; i *= 10)
	{
		int h = n / i - n / (i *= 10);
		sum += h;
	}
	printf("%d", sum);
	return 0;
}