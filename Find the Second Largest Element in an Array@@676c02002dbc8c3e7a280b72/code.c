#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int largest = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    int second = -10;
    for(int i=0; i<n; i++){
        if(arr[i] != largest){
            if(second == -10 || arr[i] > second){
                second = arr[i];
            }
        }
    }

    if(second != -10){
        printf("%d", second);
    } else {
        printf("-1");
    }

    return 0;
}
