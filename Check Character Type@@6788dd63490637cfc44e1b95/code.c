#include <stdio.h>
#include <ctype.h>  // For checking if the character is a digit

int main() {
    char ch;

    // Input character
   
    scanf("%c", &ch);

    // Check if the character is a digit
    if (isdigit(ch)) {
        printf("Digit", ch);
    }
    // Check if the character is a vowel
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel", ch);
    }
    // Otherwise, it's a consonant
    else {
        printf("Consonant", ch);
    }

    return 0;
}
