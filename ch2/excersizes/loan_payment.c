#include <stdio.h>

float GetMonthlyRemainingLoan(float loanRemain, float monthly_payment, float rate)
{
    float monthly_remain = loanRemain + loanRemain * rate / 100 / 12 - monthly_payment;
    return monthly_remain;
}

int main(void)
{
    float loan;
    float rate;
    float monthly_payment;

    float first_payment_remain;
    float second_payment_remain;
    float third_payment_remain;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    // 每个月的贷款余额减去还款金额后，还需要加上贷款余额与月利率的乘积。月利率的计算方法是把用户输入的利率转换成百分数再除以12。
//    first_payment_remain = loan + loan * rate / 100 / 12 - monthly_payment;
//    second_payment_remain = first_payment_remain + first_payment_remain * rate / 100 / 12 - monthly_payment;
//    third_payment_remain = second_payment_remain + second_payment_remain * rate / 100 / 12 - monthly_payment;
    
    first_payment_remain = GetMonthlyRemainingLoan(loan, monthly_payment, rate);
    second_payment_remain = GetMonthlyRemainingLoan(first_payment_remain, monthly_payment, rate);
    third_payment_remain = GetMonthlyRemainingLoan(second_payment_remain, monthly_payment, rate);

    printf("Balance remaining after first payment: $%.2f\n", first_payment_remain);
    printf("Balance remaining after second payment: $%.2f\n", second_payment_remain);
    printf("Balance remaining after third payment: $%.2f\n", third_payment_remain);
    return 0;
}

