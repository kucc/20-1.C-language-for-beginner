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
		printf("�� �� ������ 3�� ����� %d���̰�, �� ���� %d �̴�.", count, sum);
	}
	if (a > b) {
		find(b, a);
	}
	else {
		find(a, b);
	}
}