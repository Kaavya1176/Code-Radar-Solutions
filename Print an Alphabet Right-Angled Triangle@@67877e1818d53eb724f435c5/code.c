#include<stdio.h>
int main(){
    int n;
    char alphabet;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        // alphabet='A';
        for(int j=0;j<i;j++){
            alphabet='A';
            printf("%c ",alphabet);
            alphabet++;
        }
    printf("\n");
    }
}