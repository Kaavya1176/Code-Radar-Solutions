#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            printf(" ");
        }
        for(k=0;k<i+1;k++){
            printf("*");
        }
    printf("\n");
    }
}