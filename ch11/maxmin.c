#include <stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);

int main(void)
{
    int b[N], i, big, small;
    printf("输入 %d 个数字：", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &b[i]);
    }

    max_min(b, N, &big, &small);
    printf("最大数：%d\n", big);
    printf("最小数：%d\n", small);
    return 0;
}

void max_min(int a[], int n, int *max, int *min)
{
    int i;

    *max = *min = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > *max)
        {
            *max = a[i];
        }
        else if (a[i] < *min)
        {
            *min = a[i];
        }
    }
}