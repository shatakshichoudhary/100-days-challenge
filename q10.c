#include<stdio.h>
int main() {
    int mins, hrs, secs;
    printf("Enter time in seconds: ");
    scanf("%d", &secs);
    hrs = secs / 3600;
    mins = secs % 3600 / 60;
    secs = secs % 60;
    printf("The time is: %d:%d:%d hours \n", hrs, mins, secs);
    return 0;
}