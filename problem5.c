#include <stdio.h>

int main()
{
    int m, n;
    int i;
    int gcd = 0;
    printf("두 수를 입력하세요: \n");
    scanf_s("%d %d", &m, &n);

    for (i = 1; i <= m; i++)
    {
        if (m % i == 0 && n % i == 0)
            gcd = i;
    }
    printf("%d\n", gcd);

    return 0;
}
