#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char str[50]; // 입력받을 문자열
	int n1 = 0; //모음 개수 
	int n2 = 0; //자음 개수
	int i = 0;

	printf("알파벳으로 이루어진 문자열 입력:");
	scanf("%s", str);

	while (str[i] != NULL) {

		if (str[i] == 'a' || str[i] == 'A') {
			n1++;
		}
		else if (str[i] == 'e' || str[i] == 'E') {
			n1++;
		}
		else if (str[i] == 'i' || str[i] == 'I') {
			n1++;
		}
		else if (str[i] == 'o' || str[i] == 'O') {
			n1++;
		}
		else if (str[i] == 'u' || str[i] == 'U') {
			n1++;
		}
		else {
			n2++;
		}
		
		i++;

	}

	printf("모음 개수: %d\n", n1);
	printf("자음 개수: %d\n", n2);


	return 0;
}