#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
   if (a % 400 == 0) {
        printf("Leap Year\n");
    } else if ((a % 4 == 0) && (a % 100 != 0)) {
        printf("Leap Year\n");
    } else {
        printf("Not a Leap Year\n");
    }
    return 0;
}