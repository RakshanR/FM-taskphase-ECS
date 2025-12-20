#include <stdio.h>
void bubbleSort(int arr[], int n){
    int i, j, temp;
    for(i=0;i<n-1;i++)
        for(j=0;j<n-1-i;j++)
            if(arr[j]>arr[j+1]) {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
}
int binarySearch(int arr[], int n, int key){
    int low=0,high=n-1, mid;
    while(low<=high) {
        mid=(low+high)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid] < key)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}
int main(){
    int n, i, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i=0; i< n; i++)
        scanf("%d", &arr[i]);
    bubbleSort(arr, n);
    printf("Sorted array: ");
    for(i=0; i<n;i++)
        printf("%d ", arr[i]);
    printf("\n");
    printf("Enter element to search: ");
    scanf("%d", &key);
    int result=binarySearch(arr, n, key);
    if(result!= -1)
        printf("Element %d found at index %d\n", key, result);
    else
        printf("Element %d not found\n", key);
    return 0;
}
