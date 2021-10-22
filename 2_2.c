#include <stdio.h>

int cal_interest() {
    double amount;
    printf("input initial amount: ");
    scanf("%lf", &amount);
    for (int i=0; i<3; i++) {
        amount = amount * 1.33;
    }
    printf("after 3 years, the amount is %f\n", amount);
}

int main() {
    cal_interest();
}