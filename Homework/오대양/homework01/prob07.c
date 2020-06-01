#include <stdio.h>

int main(void) {
	
	int credit[5], grade[5];
	int i,j,k,converted;
	float sum =0;
	float allcredit = 0;
	float avg;
	
	for (i=0;i<5;i++) {
		scanf("%d %s", &credit[i], &grade[i]);
	}
	
	for (j=0;j<5;j++) {
		if (grade[j]==65) {
			converted = 4; 
		}
		if (grade[j]==66) {
			converted = 3; 
		}
		if (grade[j]==67) {
			converted = 2; 
		}
		if (grade[j]==68) {
			converted = 1;
		}
		if (grade[j]==70) {
			converted = 0; 
		}
		
		sum += credit[j] * converted;
		
	}
	
	for (k=0;k<5;k++) {
		allcredit += credit[k];
	}
	
	avg = sum/allcredit;
	
	printf("총 평점:%.2f", avg);
	
	return 0;
}
