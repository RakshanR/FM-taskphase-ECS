#include <stdio.h>
int main() {
    int n, i;
    int arr[100];
    int *ptr=arr;
    int temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i=0; i< n; i++) {
        scanf("%d", ptr+ i);
    }
    for (i= 0; i< n-1; i+= 2) {
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + i + 1);
        *(ptr + i + 1) = temp;
    }
    printf("Array after swapping adjacent elements:\n");
    for (i=0; i <n; i++) {
        printf("%d ", *(ptr+i));
    }
    return 0;
}
