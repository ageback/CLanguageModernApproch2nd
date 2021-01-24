#include <stdio.h>

int main(void)
{
    short i, result = 1;
    printf("Enter a positive integer: ");

    // 读写short类型时，在 d、o、u或 x 前面加上字母 h
    scanf("%hd", &i);

    for(short j=1;j<=i;j++)
    {
        result *= j;
    }


    printf("Factorial of %hd: %hd", i, result);
    return 0;
}