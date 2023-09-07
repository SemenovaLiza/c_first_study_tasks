#include <stdio.h>
int main(void) {
    int a, b;
    printf("Input number");
    scanf("%d", &a);
    if ((a > 0) && (a % 2 == 0))
        printf("The entered number is even and positive");
    return 0;
}