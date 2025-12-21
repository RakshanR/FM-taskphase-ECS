#include <stdio.h>
int main(){
    float units;
    float bill;
    printf("Enter total units: ");
    if(scanf("%f",&units)!=1){
        printf("Invalid input! Please enter a numeric value only.\n");
        return 1;
    }
    if(units<0){
        printf("Units cannot be negative.\n");
        return 1;
    }
    if(units<=100){
        bill=units*5;
    }
    else if(units<=300){
        bill=(100*5)+(units-100)*8;
    }
    else{
        bill=(100*5)+(200*8)+(units-300)*10;
    }
    printf("Total Electricity bill=rs.%.2f\n",bill);
    return 0;
}
