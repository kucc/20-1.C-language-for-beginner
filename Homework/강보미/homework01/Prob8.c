#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char str[50]; // �Է¹��� ���ڿ�
	int n1 = 0; //���� ���� 
	int n2 = 0; //���� ����
	int i = 0;

	printf("���ĺ����� �̷���� ���ڿ� �Է�:");
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

	printf("���� ����: %d\n", n1);
	printf("���� ����: %d\n", n2);


	return 0;
}