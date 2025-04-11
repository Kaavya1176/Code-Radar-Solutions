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

    int second = -2;
    for(int i=0; i<n; i++){
        if(arr[i] != largest){
            if(second == -2 || arr[i] > second){
                second = arr[i];
            }
        }
    }

    if(second != -2){
        printf("%d", second);
    } else {
        printf("-1");
    }

    return 0;
}
