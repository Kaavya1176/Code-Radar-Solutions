#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    while(n!=0){
        count=count+1;
        printf("%d",count);
    }
}