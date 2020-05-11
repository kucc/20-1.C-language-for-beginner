#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int weight[5] = {0, 0, 0, 0, 0};
	char grade[5] = {0, 0, 0, 0, 0};
	float grade_n[5] = { 0, 0, 0, 0, 0 };
	for (int i = 1; i < 6; i++) {
		printf("과목%d의 학점과 성적을 입력하세요", i);
		scanf("%d %c", &weight[i - 1], &grade[i - 1]);
	}
	for (int i = 0; i < 5; i++) {
		if (grade[i] == "A") {
			grade_n[i] = 4;
		}
		else if (grade[i] == "B") {
			grade_n[i] = 3;
		}
		else if (grade[i] == "C") {
			grade_n[i] = 2;
		}
		else if (grade[i] == "D") {
			grade_n[i] = 1;
		}
		else {
			grade_n[i] = 0;
		}
	}
	float total_grade = 0, total_credit = 0;
	float avg = 0;
	for (int i = 0; i < 5; i++) {
		total_grade = total_grade + weight[i] * grade_n[i];
		total_credit = total_credit + weight[i];
	}
	avg = (total_grade / total_credit) * 3;
	printf("학점평균 : %f", avg);
}