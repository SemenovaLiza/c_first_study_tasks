#include <stdio.h>
int main(void) {
    float a, b, c;
    printf("Input numbers");
    scanf("%f %f", &a, &b);
    c=a*b;
    printf("Result c=%.3f", c);
    return 0;
}