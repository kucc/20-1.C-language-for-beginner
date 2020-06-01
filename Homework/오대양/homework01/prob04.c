#include <stdio.h>

int main() {
	
	int input_Number, sum;
	scanf("%d", &input_Number);
	
	sum =0;
	
	while(1) {
		sum += input_Number%10;

		if (input_Number/10==0) {
			break;
		}
		
		input_Number/= 10;
	}
	

	printf("%d", sum);
}