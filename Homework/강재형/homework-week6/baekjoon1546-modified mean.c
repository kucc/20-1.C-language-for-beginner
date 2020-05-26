#include <stdio.h>
#define	 _CRT_SECURE_NO_WARNINGS


int main() {
	int num1;
	scanf_s("%d", &num1);
	double list[1000] = { 0, };
	double max = 0;
	for (int i = 0; i < num1; i++) {
		scanf_s("%lf", &list[i]);
		if (list[i] > max) {
			max = list[i];
		}
	}

	double sum = 0;
	for (int i = 0; i < num1; i++) {
		sum = sum + list[i];
	}
	printf("%lf", sum / num1 / max * 100);
}