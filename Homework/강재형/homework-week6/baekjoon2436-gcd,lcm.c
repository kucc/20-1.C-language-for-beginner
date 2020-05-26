#include <stdio.h>
#define	 _CRT_SECURE_NO_WARNINGS


int nocd(int a, int b) {
	if (a == 1) {
		return 1;
	}
	if (a == b) {
		return 0;
	}
	for (int i = 2; i < a + 1; i++) {
		if (a % i == 0 && b % i == 0) {
			return 0;
		}
	}
	return 1;
}


int main() {
	int num1; int num2;
	scanf_s("%d %d", &num1, &num2);
	int ab = num2 / num1;
	int halfab = ab / 2;
	int min = ab + 1;
	int temp = 1;
	for (int i = 2; i < halfab+1; i++) {
		if (ab % i == 0) {
			if (nocd(i, ab / i) == 1 && i + (ab / i) < min) {
				min = i + ab / i;
				temp = i;
			}
		}
	}
	if (num2 / temp <= num1* temp) {
		printf("%d %d", num2 / temp, num1 * temp);
	}
	else {
		printf("%d %d", num1 * temp, num2 / temp);
	}
}