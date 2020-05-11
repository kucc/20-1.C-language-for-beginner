#include<stdio.h>
int main() {
	int a, b, t, count, sum;
	sum = 0;
	count = 0;
	scanf("%d %d", &a, &b);

	int find(int x, int y) {
		for (int t = x + 1; t < y; t++) {
			if (t % 3 == 0) {
				sum += t;
				count++;
			}

		}
		printf("두 수 사이의 3의 배수는 %d개이고, 그 합은 %d 이다.", count, sum);
	}
	if (a > b) {
		find(b, a);
	}
	else {
		find(a, b);
	}
}