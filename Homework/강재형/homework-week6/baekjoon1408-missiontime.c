#include <stdio.h>
#define	 _CRT_SECURE_NO_WARNINGS


int main() {
	int now[3]; int mission[3]; int temp;
	scanf_s("%d:%d:%d", &now[0], &now[1], &now[2]);
	scanf_s("%d:%d:%d", &mission[0], &mission[1], &mission[2]);
	int nowsec = now[2] + now[1] * 60 + now[0] * 3600;
	int missionsec = mission[2] + mission[1] * 60 + mission[0] * 3600;
	if (missionsec > nowsec) {
		temp = missionsec - nowsec;
	}
	else {
		temp = 86400 - nowsec + missionsec;
	}
	int gap[3] = { temp / 3600, (temp % 3600) / 60, (temp % 3600) % 60 };
	printf("%02d:%02d:%02d", gap[0], gap[1], gap[2]);
}



