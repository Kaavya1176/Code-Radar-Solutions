#include <stdio.h>
int main(){
    char input;
    scanf("%c",&input);
    if (input >= 'A' && input <= 'Z') {
        printf("Uppercase\n");
    }
    if (input >= 'a' && input <= 'z') {
        printf("Lowercase\n");
    }
    else{
        printf("Not an alphabet");
    }
}