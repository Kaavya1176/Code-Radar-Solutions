#include <stdio.h>
int main(){
    int a,b,result;
    scanf("%d%d",&a,&b);
    result=(a&b);
    if (result==1){
        printf("Set");
    }
    if (result==0){
        printf("Not Set");
    }
    return 0;
}