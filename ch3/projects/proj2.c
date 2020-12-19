#include <stdio.h>

int main(void)
{
    int itemNumber;
    float unitPrice;
    int y,m,d;
    

    printf("Enter item numbber: ");
    scanf("%d/", &itemNumber);
    printf("Enter unit price: ");
    scanf("%f", &unitPrice);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m, &d, &y);

    printf("Item\tUnit\t\tPurchase\n");
    printf("\tPrice\t\tDate\n");
    printf("%-d\t$%7.2f\t%-d/%-d/%-d", itemNumber, unitPrice, y, m, d);

    return 0;
}