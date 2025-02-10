#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%a%b%c",&a,&b,&c);
    if (((a+b)>c)){
        printf("Valid");
    }
    else if (((b+c)>a)){
        printf("Valid");
    }
    else if (((c+a)>b)){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}