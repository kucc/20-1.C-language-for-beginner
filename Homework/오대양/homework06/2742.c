#include <stdio.h>

int countdown(int number) {
	int i;
	
	for(i=number;i>0;i--){
		printf("%d\n", i);
	}
}

int main() {
	
	int number;
	scanf("%d", &number);
	countdown(number);
}