#include<stdio.h>
int main(){
    //array using pointer
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr1 = arr;  
    for(int i = 0; i < 5; i++){
        printf("Value at arr[%d]: %d\n", i, *(ptr1 + i));
    }
    int (*ptr)[5] = &arr;
    for(int i = 0; i < 5; i++){
        printf("Value at arr[%d] using pointer to array: %d\n", i, (*ptr)[i]);
    }
    // input using the array pointer
    printf("Enter 5 integers:\n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &(*ptr)[i]);
    }
    return 0;
}