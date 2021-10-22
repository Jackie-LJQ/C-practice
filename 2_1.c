#include <stdio.h>


void prefix() {
    int a = 10;
    printf("a++ = %d\n", a++);
    printf("a = %d\n", a);
    a = 10;
    printf("++a = %d\n", ++a);
    printf("a = %d\n", a);
}
void cal_duration() {
    int start_hour, start_min;
    int end_hour, end_min;
    printf("input start time: \n");
    scanf("%d %d", &start_hour, &start_min);
    printf("input end time: \n");
    scanf("%d %d", &end_hour, &end_min);
    int duration = end_hour*60 + end_min - start_hour * 60 - start_min;
    printf("duration is %d hours %d minute.\n", duration/60, duration%60);
}

int main() {
    prefix();
}

