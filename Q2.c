#include <stdio.h>
int main(){
    float seconds;
    int hrs,mins;
    float rem_seconds;
    printf("Enter total seconds: ");
    if(scanf("%f",&seconds)!=1){
        printf("Invalid input! Please enter a numeric value only.\n");
        return 1;
    }

    if(seconds<0){
        printf("Seconds cannot be negative.\n");
        return 1;
    }
    hrs=(int)(seconds/3600);
    mins=(int)((seconds-(hrs*3600))/60);
    rem_seconds=seconds-(hrs*3600)-(mins*60);

    printf("Hours:%d\n",hrs);
    printf("Minutes:%d\n",mins);
    printf("Seconds:%.2f\n",rem_seconds);

    return 0;
}
