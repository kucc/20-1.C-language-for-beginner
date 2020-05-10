#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int n1, n2; //입력받을 두 정수
	int big, small; //n1, n2중에 큰 것, 작은 것
	int cm = 0; //공약수

	printf("정수 두 개 입력: ");
	scanf("%d %d", &n1, &n2);

	if (n1 >= n2) {
		big = n1;
		small = n2;
	}
	else {
		big = n2;
		small = n1;
	}

	for (int i = 1; i <= small; i++) {
		if (big % small == 0) {
			cm = small;
			break;
		}

		if (small % i == 0 && big % i == 0) {
			cm = i;
		}
	}

	printf("%d와 %d의 최대 공약수: %d\n", n1, n2, cm);

	return 0;
}