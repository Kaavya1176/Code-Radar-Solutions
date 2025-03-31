#include<stdio.h>
int main(){
    int n,i;
    int arr[n];
    scanf("%d",&n);
     int output=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        if((arr[i]>arr[i-1])&&(arr[i]>arr[i+1])){
            output=1;
        }
    }
    if(output=1){
        printf("%d",arr[i]);
    }
    else{
        return -1;
    }
}