#include<stdio.h>
int main(){
    int n;
    int arr[n];
    scanf("%d",&n);
    int sort=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>arr[i+1]){
           sort=1;
        }
        }
if(sort==1){
    printf("Sorted");
}
else{
    printf("Not  Sorted");
}
    }
