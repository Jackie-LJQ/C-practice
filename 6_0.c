#include <stdio.h>

void combination() {
    printf("input a number (1-6): ");
    int number;
    scanf("%d", &number);
    int count = 0;
    printf("The combinations are: \n");
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            if (j==i) {continue;}
            for (int k=0; k<4; k++) {
                if (k==i | k==j) {continue;}
                printf("%d%d%d ", number+i, number+j, number+k);
                count += 1;
                if (count % 6 == 0) {printf("\n");}
            }
        }
    }
}

void mul_form() {
    int i, j;
    for (i=1; i<10; i++) {
        for (j=1; j<=i; j++) {
            printf("%d*%d=%d", j, i, i*j);
            if (i*j < 10) {
                printf("   ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void Prime() {
    printf("input two numbers: ");
    int m, n;
    scanf("%d %d", &m, &n);
    int i, j, isPrime;
    int summ = 0; 
    int count = 0;
    if (m==1) {
        m = 2;
    }
    for (i=m; i<=n; i++) {
        isPrime = 1;
        for (j=2; j*j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }        
        }
        if (isPrime) {
            summ += i; 
            count += 1;
        }
    }
    printf("Total number of Primee between %d and %d is %d, summation is %d\n", m, n, count, summ);
}

void first_N() {
    printf("Input N: ");
    int N;
    scanf("%d", &N);
    int dividend=2, divisor=1;
    int k, tmp;
    double sum = 0;
    for (k=1; k<=N; k++) {
        sum += 1.0 * dividend / divisor;
        tmp = dividend;
        dividend = dividend + divisor;
        divisor = tmp;
    }
    printf("The summation of first N element is %.2f\n", sum);
}

int main() {
    // combination();
    // mul_form();
    // Prime();
    first_N();
}