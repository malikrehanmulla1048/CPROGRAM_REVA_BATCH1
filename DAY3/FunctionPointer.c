#include<stdio.h>
int add(int a, int b) {
    return a + b;
}
int main(){
    int (*funcPtr)(int, int) = add;
    int result = funcPtr(5, 10);
    printf("Result of addition: %d\n", result);
    return 0;    
}