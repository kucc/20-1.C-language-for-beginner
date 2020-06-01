#include <stdio.h>

int Yut_helper(int num1, int num2, int num3, int num4) {
	int sum = num1 + num2 + num3 + num4;
	if(sum==0) {
		printf("D\n");
	} else if (sum==1) {
		printf("C\n");
	} else if (sum==2) {
		printf("B\n");
	} else if (sum==3) {
		printf("A\n");
	} else if (sum==4) {
		printf("E\n");
	}
}
int main() {
	int num1, num2, num3, num4;
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
	Yut_helper(num1, num2, num3, num4);
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
	Yut_helper(num1, num2, num3, num4);
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
	Yut_helper(num1, num2, num3, num4);
}