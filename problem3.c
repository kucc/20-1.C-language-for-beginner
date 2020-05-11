#include <stdio.h>

int main()
{
	int time, hour, min, sec;

	printf("초를 입력하세요: ");
	scanf_s("%d", &time);

	hour = time / 3600;
	min = (time % 3600) / 60;
	sec = (time % 3600) % 60;

	printf("%d초는 %d시간 %d분 %d초다", time, hour, min, sec);

	return 0;


}
