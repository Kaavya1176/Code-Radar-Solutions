// Your code here...#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int msb = (num >> 31) & 1;  // Extract MSB for 32-bit integer

    printf("%d", msb);

    return 0;
}
