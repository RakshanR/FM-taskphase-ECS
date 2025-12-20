#include <stdio.h>
int main(){
    int M, N;
    printf("Enter number of rows: ");
    scanf("%d", &M);
    printf("Enter number of columns: ");
    scanf("%d", &N);
    int mat[M][N], rot[N][M];
    printf("Enter elements of the matrix:\n");
    for(int i=0;i<M;i++)
        for(int j=0;j<N;j++)
            scanf("%d",&mat[i][j]);
    for(int i=0; i<M;i++)
        for(int j=0;j<N;j++)
            rot[j][M-1-i]=mat[i][j];
    printf("Matrix after 90 degree clockwise rotation:\n");
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++)
            printf("%d\t", rot[i][j]);
        printf("\n");
    }
    return 0;
}
