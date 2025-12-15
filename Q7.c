#include <stdio.h>
int main(){
    int n,i;
    int arr[100];
    int *ptr=arr;
    int largest,sec;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i=0;i<n;i++){
        scanf("%d", ptr+i);
    }
    largest=sec=*ptr;
    for (i=0;i<n;i++){
        if (*(ptr+i)>largest){
            sec=largest;
            largest=*(ptr + i);
        }
        else if (*(ptr + i)>sec && *(ptr+i)!=largest){
            sec=*(ptr+i);
        }
    }
    printf("Second largest element= %d\n", sec);
    return 0;
}
