#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int sort=1; //sorted assume
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){ //not sorted 
           sort=0;
           break;
        }
    }
if(sort==1){
    printf("Sorted");
}
else{
    printf("Not Sorted");
}
    }
