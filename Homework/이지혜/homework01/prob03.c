#include<stdio.h>
int main() {
	int s;
	scanf("%d", &s);
	int h = s / 3600;
	int m = s / 60 - h;
	printf("%d�ð�, %d��, %d��", h, m, s % 60);
}