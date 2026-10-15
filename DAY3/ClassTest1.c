#include<stdio.h>
#include<stdlib.h>
int** rotateMatrix(int m,int n,int arr[3][3]){
    int** newarr = (int**)malloc(n * sizeof(int*));
    for(int i = 0; i < n; i++){
        newarr[i] = (int*)malloc(m * sizeof(int));
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            newarr[j][m-i-1] = arr[i][j];
        }
    }
    return newarr;
}
int main(){
    int arr[3][3] = {{1,2,3},{4,6},{7,8,9}};
    int **newarr = rotateMatrix(3,3,arr);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",newarr[i][j]);
        }
        printf("\n");
    }
    return 0;
}