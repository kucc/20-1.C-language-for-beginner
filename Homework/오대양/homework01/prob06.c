#include <stdio.h>
int main() {
	int num_1, num_2, temp;
	int many_3 =0;
	int sum_3 =0;
	
	scanf("%d %d", &num_1, &num_2);
	
	if (num_1 > num_2) {
		temp = num_1;
		num_1 = num_2;
		num_2 = temp;
	}
	
	temp = num_1 + 1;
	
	while(temp<num_2) {
		if(temp%3==0) {
			many_3 +=1;
			sum_3 += temp;
		}
		temp+=1;
	}
	printf("3의 배수는 %d개, 이들의 합은 %d", many_3, sum_3);
	
	
	return 0;
}