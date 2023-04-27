#include <stdio.h>

int main() {
    float exchange_rate, won_amount, dollar_amount;
    
    printf("환율을 입력하시오: ");
    scanf("%f", &exchange_rate);
    
    printf("원화 금액을 입력하시오: ");
    scanf("%f", &won_amount);
    
    dollar_amount = won_amount / exchange_rate;
    
    printf("원화 %.0f원은 %.6f달러입니다.", won_amount, dollar_amount);
    
    return 0;
}
