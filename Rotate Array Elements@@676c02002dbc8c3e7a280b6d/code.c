#include<stdio.h>
int main(){
    int n;
    int arr[n],k;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        int temp=arr[n-1];
        for(int i=n-2;i>=0;i--){
            arr[i+1]=arr[i];
        }
        arr[0]=temp;
        k--;
    }
    printf("%d",arr);
}