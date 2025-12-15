#include <stdio.h>
int main() {
    int matrix[4][4];
    int totalSum = 0;
    int prim= 0, sec= 0;
    printf("Enter elements of 4x4 matrix:\n");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nMatrix is:\n");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            totalSum += matrix[i][j];
            if(i == j)              
                prim+= matrix[i][j];
            if(i + j == 3)          
                sec+= matrix[i][j];
        }
    }
    printf("\nSum of all elements: %d\n", totalSum);
    printf("Sum of primary diagonal: %d\n", prim);
    printf("Sum of secondary diagonal: %d\n", sec);
    return 0;
}
