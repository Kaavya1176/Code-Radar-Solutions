#include <stdio.h>

int main() {
    char ch;

    // Input character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a digit
    if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    }
    // Check if the character is a vowel
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    }
    // Check if the character is an alphabetic character (a consonant)
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is a consonant.\n", ch);
    }
    // If it's none of the above, it is a special character
    else {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}
