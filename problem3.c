#include <stdio.h>

int main()
{
	int time, hour, min, sec;

	printf("�ʸ� �Է��ϼ���: ");
	scanf_s("%d", &time);

	hour = time / 3600;
	min = (time % 3600) / 60;
	sec = (time % 3600) % 60;

	printf("%d�ʴ� %d�ð� %d�� %d�ʴ�", time, hour, min, sec);

	return 0;


}
