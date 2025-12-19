#include <stdio.h>
#include <stdlib.h>

 void swapNumbers(int *x, int *y) {

    int temp = *x;

    *x = *y;

    *y = temp;
}

int main()
{
    int a = 15, b = 40;

    printf("Before Swap: a = %d, b = %d\n", a, b);


    swapNumbers(&a, &b);

    printf("After Swap:  a = %d, b = %d\n", a, b);



    return 0;
}
