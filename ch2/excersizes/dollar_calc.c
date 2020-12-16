#include <stdio.h>

int main(void)
{
    int dollar;
    int d20;
    int d10;
    int d5;
    int d1;
    printf("Enter a dollar amount:", dollar);
    scanf("%d", &dollar);

    d20 = dollar / 20;
    dollar = dollar - (d20 * 20);

    d10 = dollar / 10;
    dollar = dollar - (d10 * 10);

    d5 = dollar / 5;
    dollar = dollar - (d5 * 5);

    d1 = dollar / 1;
    dollar = dollar - (d1 * 1);

    printf("$20 bills: %d\n", d20);
    printf("$10 bills: %d\n", d10);
    printf("$5 bills: %d\n", d5);
    printf("$1 bills: %d\n", d1);
    return 0;
}
