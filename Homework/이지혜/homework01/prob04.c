// �ƿ� for �� ������ �ȵ��� �ٷ� sum =0;�� ���Ϳ�...
//��� ������ �ִ� �ɱ��?

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