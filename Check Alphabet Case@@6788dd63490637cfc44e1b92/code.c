#include <stdio.h>
int main(){
    char input;
    scanf("%c",&input);
    if (('A''>=input)&&(input<='Z')){
        printf("Uppercase");
    }
    if (('a>=input)&&(input<='z')){
        printf("Lowercase");
    }
}