#include<stdio.h>
int main(){
    int arr [5] = {1, 2, 3, 4, 5};
    int (*ptr)[5] = &arr;
    printf("Address of arr: %p\n", (void*)ptr);
    printf("Value at address ptr: %d\n", (*ptr)[0]);
    return 0;
}