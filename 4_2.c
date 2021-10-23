#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guass() {
    srand(time(0));
    int number = rand() % 100 + 1;
    printf("Lets start guass!\n");
    int count = 0;
    int a;
    do {
        printf("input your guass (1-100): ");
        scanf("%d", &a);
        count ++;
        if (a > number) {
            printf("Try a smaller number.\n");
        } else if (a < number) {
            printf("Try a larger number.\n");
        }
    } while (a != number);
    printf("Get right answer in the %dth trial\n", count);
}

void cal_mean() {
    int res = 0;
    int count = 0;
    int number;
    printf("user input:");
    scanf("%d", &number);
    while (number != -1) {
        res += number;
        printf("user input:");
        scanf("%d", &number);
        count++;
    }
    printf("The average of the inputs is %f.\n", 1.0*res/count);
}

void Log_2() {
    printf("input number: ");
    int number;
    scanf("%d", &number);
    int tmp = number;
    int res = 0;
    while (number > 1) {
        number /= 2;
        res += 1;
    }
    printf("log2(number) = %d\n", res);
}

int main() {
    // guass();
    // cal_mean();
    Log_2();
}