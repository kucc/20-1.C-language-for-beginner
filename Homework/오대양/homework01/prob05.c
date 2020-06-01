#include <stdio.h>

int main() {
	int GCD, num_1, num_2, temp;
	
	scanf("%d %d", &num_1, &num_2);
	

	temp = 1;
	
	while(temp <= num_1 || temp <= num_2) {
		if (num_1%temp==0 && num_2%temp==0) {
			
			GCD= temp;
		}
		temp+=1;
	}
	
	printf("%d", GCD);
}