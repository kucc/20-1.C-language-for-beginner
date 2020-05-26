#include <stdio.h>
#include <stdlib.h> 
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int num; int sum = 0; int num_s; int min;
	scanf_s("%d %d", &num_s, &num);
	int* sosu;
	sosu = malloc(sizeof(int) * (num+1));
	sosu[0] = 0;
	sosu[1] = 0;
	for (int i = 2; i < num+1; i++) {
		sosu[i] = 1;
	}
	for (int i = 2; i < num+1; i++) {
		if (sosu[i] ==1) {
			for (int j = 2; j <= num/i ; j++){
				sosu[i*j] = 0;
			}
		}
	}
	for (int i = num; i >= num_s; i--) {
		if (sosu[i] == 1) {
			sum = sum + i;
			min = i;
		}
	}
	if (sum == 0) {
		printf("%d", -1);
	}
	else printf("%d\n%d", sum, min);
}