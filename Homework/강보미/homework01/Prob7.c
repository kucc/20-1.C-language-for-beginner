#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int credit[5]; //입력받을 학점 
	char score[5]; //입력받을 성적 
	int sum = 0;
	float avg;

	for (int i = 0; i < 5; i++) {
		scanf("%d %c", &credit[i], &score[i]);
	}

	for (int i = 0; i < 5; i++) {
		
		if (score[i] == 'A') {
			sum += credit[i] * 4;
		}
		else if (score[i] == 'B') {
			sum += credit[i] * 3;
		}
		else if (score[i] == 'C') {
			sum += credit[i] * 2;
		}
		else if (score[i] == 'D') {
			sum += credit[i] * 1;
		}
		else {
			sum += credit[i] * 0;
		}
	}

	avg = (float)sum / 5;
	printf("총 평점: %.1f", avg);


	return 0;
}