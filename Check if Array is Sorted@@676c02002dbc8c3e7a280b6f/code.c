#include<stdio.h>
int main(){
    int n;
    int arr[n];
    scanf("%d",&n);
    int sort=1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>arr[i+1]){
           sort=0;
           break;
        }
        }
if(sort==1){
    printf("Sorted");
}
else{
    printf("Not  Sorted");
}
    }
