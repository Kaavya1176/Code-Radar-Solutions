#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>arr[0]){
            largest=arr[i];
        }
    }
    int second=arr[0];
    int ans;
    for(int i=0;i<n;i++){
        if((arr[i]>second)&&(second<largest)){
            ans==0;
        }
        else{
        	ans==1;
		}
        second=arr[i];
      
    }
if(ans==0){
	printf("%d",second);
}
}
