// Your code here...#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int msb = (num >> 31) & 1;  // Extract MSB for 32-bit integer

    printf("MSB is %d\n", msb);

    return 0;
}
