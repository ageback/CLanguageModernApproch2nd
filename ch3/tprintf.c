#include <stdio.h>

int main(void)
{
    int i;
    float x;

    i = 40;
    x = 839.21f;
    
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    /*|40|   40|40   |  040|*/
    /*|   839.210|8.392e+002|839.21    |*/

    return 0;
}
