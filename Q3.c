#include <stdio.h>
int main() {
    int units;
    float bill;
    printf("Enter total units: ");
    scanf("%d",&units);
    if (units<=100) {
        bill=units*5;
    }
    else if (units<=300){
        bill=(100*5)+ (units-100)*8;
    }
    else {
        bill=(100*5)+(200*8)+(units-300)*10;
    }
    printf("Total Electricity bill= rs.%.2f\n", bill);
    return 0;
