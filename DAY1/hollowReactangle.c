#include<stdio.h>
int main(){
    int len;
    int bre;
    scanf("%d %d",&len,&bre);
    for(int i=0;i<len;i++){
        for(int j=0;j<bre;j++){
            if(i==0 || i==len-1 || j==0 || j==bre-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}