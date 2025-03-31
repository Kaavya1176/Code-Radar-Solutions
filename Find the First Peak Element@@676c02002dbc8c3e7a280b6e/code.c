#include<stdio.h>
int main(){
    int n,i;
     scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int output=-1;
    for(i=0;i<n-1;i++){
        if((arr[i]>arr[i-1])&&(arr[i]>arr[i+1])){
            output=1;
            break;
        }
        
    }
    if(output==-1){
      
        printf("-1");
    }
    else{
         printf("%d",arr[i]);
    }
}