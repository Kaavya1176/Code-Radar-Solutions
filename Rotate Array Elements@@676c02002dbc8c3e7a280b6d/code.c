#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
    }
    int n2;
    scanf("%d",&n2);
    printf("%d",arr[n-n2])
    for(int i=n-n2;i<n;i++){
        printf("%d",&arr[i])
    }
    for(int i=0;i<n-n2;i++){
        printf("%d\n",&arr[i]);
    }
}