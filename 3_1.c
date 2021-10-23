#include <stdio.h>
int main() {
    int hour1, hour2;
    int min1, min2;
    printf("input start time, divided by space: ");
    scanf("%d %d", &hour1, &min1);
    printf("input end time, divided by space: ");
    scanf("%d %d", &hour2, &min2);
    int im = min2-min1;
    int ih = hour2-hour1;
    if (im < 0) {
        im = 60 + im;
        ih--;
    }
    printf("The interval is %d hours, %d minutes.\n", ih, im);
    return 0;
}

