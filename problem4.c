#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    printf("숫자를 입력하세요: \n");
    scanf_s("%d", &n);

    sum = 0;

    while (n != 0)
    {
        sum += (n % 10);
        n = n / 10;
    }

    printf("%d\n", sum);
    return 0;

}
