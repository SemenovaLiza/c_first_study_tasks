#include <stdio.h>
int main(void) {
    int a, b, c;
    printf("Input numbers");
    scanf("%d %d", &a, &b);
    if((a % b == 0) || (b % a == 0)) {
        c = a / b;
        printf("Result is %d", c);
    }
    else {
        printf("Result is %d", c=(a + b));
    }
    return 0;
}