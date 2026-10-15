#include<stdio.h>
int main(){
    int a = 10;
    int b = 20;
    int c = 10;
    int *ptr1[3] = {&a, &b, &c};
    for(int i = 0; i < 3; i++){
        printf("Value at address ptr1[%d]: %d\n", i, *ptr1[i]);
    }
    return 0;
}