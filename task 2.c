#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=10;   //integer variable
    int*ptr;   //integer pointer

    ptr=&num;   //store address of num

    printf("Value of num: %d/n",num);
    printf("Address of num:%p\n",(void*)&num);
    printf("Value stored in ptr: %p\n",(void*)ptr);
    printf("Value accessed using *ptr: %d\n",*ptr);




    return 0;
}
