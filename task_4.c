#include <stdio.h>
int max(int a, int b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}
int main(void) {
    int a, b, c;
    printf("Input numbers");
    scanf("%d %d", &a, &b);
    if(a != b){
        c = max(a, b);
        printf("Max number is c=%d", c);
    }
    else{
        printf(" ");
    }
    return 0;
}