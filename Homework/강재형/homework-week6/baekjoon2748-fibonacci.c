#include <stdio.h>
#define	 _CRT_SECURE_NO_WARNINGS


int main() {
	int num;
	scanf_s("%d", &num);
	long long temp[3] = { 1, 1, 2 };
	long long fibo = 0;
	if (num < 4) {
	printf("%lld", temp[num - 1]);
	}
	else {
		for (int i = 4; i < num + 1; i++) {
			int index = (i - 1) % 3;
			fibo = temp[0] + temp[1] + temp[2] - temp[index];
			temp[index] = fibo;
		}
	printf("%lld", fibo);
	}
	return 0;
}