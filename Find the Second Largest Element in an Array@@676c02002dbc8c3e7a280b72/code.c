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

    int second = -1;
    for(int i=0; i<n; i++){
        if(arr[i] != largest){
            if(second == -1 || arr[i] > second){
                second = arr[i];
            }
        }
    }

    if(second != -1){
        printf("%d", second);
    } else {
        printf("-1");
    }

    return 0;
}
