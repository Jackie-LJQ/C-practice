#include <stdio.h>

void inverse() {
    int num;
    printf("input number: ");
    scanf("%d", &num);
    int res = 0;
    int tmp =  num;
    while (tmp > 0) {
        res = res * 10 + tmp % 10;
        tmp = tmp / 10;
    }
    printf("the inverse of %d is %d\n", num, res);
}

void BCD() {
    int num;
    printf("input num: ");
    scanf("%d", &num);
    int tmp = num;
    int res = 0;
    int weight = 1;
    while (tmp > 0) {
        res  += tmp % 16 * weight;
        weight *= 10;
        tmp = tmp / 10;
    }
    printf("Right BCD value is %d\n", res);
       
}

int main() {
    // inverse();
    BCD();
    return 0;
}