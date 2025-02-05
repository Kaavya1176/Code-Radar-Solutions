#include <stdio.h>
int main(){
    int a,hd,o;
    scanf("%d",&a);
    hd=(int)a/16;
    o=(int)a/8;
    printf("Hexadecimal: %d",hd);
    printf("Octal: %d",o);
    return 0;
}