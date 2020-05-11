#include <stdio.h>
int main() {
	int GCD, a, b, t;

	t = 1;

	scanf("%d %d", &a, &b);

	while (t <= a && t <= b) {
		if (a % t == 0 && b % t == 0) {
			GCD = t;
		}
		t ++;
	}

	printf("%d", GCD);
}