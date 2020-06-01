#include <stdio.h>

int fibonacci(int num) {
	int sequence[46];
	sequence[0] = 0;
	sequence[1] = 1;
	
	int i;
	for(i=2;i<=num;i++) {
		sequence[i] = sequence[i-1] + sequence[i-2];
	}
	
	printf("%d", sequence[num]);
}

int main() {
	int num;
	scanf("%d", &num);
	fibonacci(num);
}