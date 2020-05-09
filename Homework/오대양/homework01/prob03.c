#include <stdio.h>

int main() {
	int hour, minute, second;
	
	scanf("%d", &second);
	
	hour = second/3600;
	minute = second/60;
	second = second%60;
	
	printf("%d시간 %d분 %d초", hour, minute, second);
	
}