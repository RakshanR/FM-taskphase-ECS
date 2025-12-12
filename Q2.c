#include <stdio.h>
int main() {
    int seconds, hrs, mins, rem_seconds;
    printf("Enter total seconds: ");
    scanf("%d", &seconds);
    hrs = seconds / 3600;
    mins = (seconds % 3600) / 60;
    rem_seconds = seconds % 60;
    printf("Hours: %d\n", hrs);
    printf("Minutes: %d\n", mins);
    printf("Seconds: %d\n", rem_seconds);
    return 0;
}
