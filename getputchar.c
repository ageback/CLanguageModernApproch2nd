#include <stdio.h>

int main(void)
{
    int c;

    printf("What is EOF? It's %d", EOF);

    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }

    // c = getchar();
    // while (c!=EOF){
    //     putchar(c);
    //     c=getchar();
    // }
}