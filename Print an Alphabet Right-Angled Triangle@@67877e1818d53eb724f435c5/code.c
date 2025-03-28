#include<stdio.h>
int main(){
    int n;
    char alphabet='A';
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            alphabet=alphabet+j;
            printf("%c ",alphabet-1);
            alphabet='A';
        }
    printf("\n");
    }
}