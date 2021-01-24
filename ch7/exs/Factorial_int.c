#include <stdio.h>

int main(void)
{
    int i, result = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &i);

    for(int j=1;j<=i;j++)
    {
        result *= j;
    }


    printf("Factorial of %d: %d", i, result);
}