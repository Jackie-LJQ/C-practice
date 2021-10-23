#include <stdio.h>  

void common_div () {
    printf("input two number (seperate by space) :");
    int num1, num2, tmp;
    scanf("%d %d", &num1, &num2);
    printf("The greatesr common diviser of %d and %d is:", num1, num2);
    while (num2 != 0) {
        tmp = num1 % num2;
        num1 = num2;
        num2 = tmp;
    }
    printf("%d.\n", num1);
}

void print_digit() {
    printf("input a number: ");
    int number;
    scanf("%d", &number);
    int mask = 1;
    int tmp = number;
    while (tmp > 9) {
        mask *= 10;
        tmp /= 10;
    }
    printf("The digits are: ");
    while (mask > 0) {
        printf("%d ", number / mask);
        number = number % mask;
        mask /= 10;
    }
    printf("\n");
}

int main() {
    // common_div();
    print_digit();
}