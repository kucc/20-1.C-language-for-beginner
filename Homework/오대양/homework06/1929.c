#include <stdio.h>

int prime_check (int num1, int num2);

int main() {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	
	prime_check(num1, num2);
}

int prime_check(int num1, int num2) {
	
	int i, j;
	int number_limit[1000001] = {0,};
	number_limit[1] = 1; 
	
	for (i=2; i<num2; i++) {
		for(j=2; i*j<=num2; j++) {
			number_limit[i*j]=1;
		}
	}
	
	for(i=num1;i<=num2;i++) {
		if(number_limit[i]==0) {
			printf("%d\n", i);
		}
	}
	
}