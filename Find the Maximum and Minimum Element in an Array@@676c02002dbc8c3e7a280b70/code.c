#include <stdio.h>

int main() {
    int n,i;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int max=array[0];
    int min=array[0];
    for(i=0;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
        if(array[i]<min){
            min=array[i];
        }
    }
    printf("%d ",min);
    printf("%d",max);
    
    
}
