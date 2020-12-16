#include <stdio.h>

int main(void)
{
    float r;
    printf("Enter r: ");
    scanf("%f", &r);
    float v = (4.0f / 3.0f) * 3.14159f * r * r * r;
    printf("Volume is %.2f", v);
    return 0;
}
