#include <stdio.h>

int main(void)
{
    int x, y, min_value=100, max_value=200;
    scanf("%d %d", &x, &y);
    if (
        ((x*x + y*y) < max_value * max_value) && (
        (x < (-1)*min_value && x > (-1)*max_value)
        || (x < 0 && ((min_value < y && y < max_value) || ((-1)*max_value < y && y < (-1)*min_value)))
        || ((min_value < x && x < max_value) && ((y > 0 && y < x) || (y < 0 && y > -x))))
    )
    {
        printf("inside\n");
    }
    else{
        printf("outside\n");
    }
    return 0;
}