#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
       char alpha='A';
        for(int j=n;j>=n-i+1;j--){
            printf("%c ",alpha);
            alpha++;
        }
    printf("\n");
    }
}