#include<stdio.h>
int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
int main() {
    int (*ptr)[3] = arr; 

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Value at arr[%d][%d]: %d\n", i, j, *(*(ptr + i) + j));
        }
    }

    return 0;
}